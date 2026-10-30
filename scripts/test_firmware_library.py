"""Exercise import boundaries without writing to the real firmware library."""
import json
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch
import add_firmware
import firmware_catalog


class LibraryTests(unittest.TestCase):
    def setUp(self):
        self.temp=tempfile.TemporaryDirectory();self.addCleanup(self.temp.cleanup)
        self.root=Path(self.temp.name);(self.root/'firmware').mkdir();(self.root/'analysis').mkdir()
        self.registry=self.root/'firmware/registry.json'
        primary=bytes([255])*65536
        (self.root/'firmware/primary.bin').write_bytes(primary)
        self.registry.write_text(json.dumps(dict(primary_id='primary',images=[dict(id='primary',file='firmware/primary.bin',sha256=firmware_catalog.digest(primary),base_address=0)])))
        (self.root/'analysis/maps.json').write_text('[]')
        self.source=self.root/'input.bin';self.source.write_bytes(bytes([0])*59392)
        for module in (add_firmware,firmware_catalog):
            for name,value in [('ROOT',self.root),('REGISTRY',self.registry)]:
                p=patch.object(module,name,value);p.start();self.addCleanup(p.stop)

    def add(self,key='new-image',base=0x1800):
        return add_firmware.add(self.source,key,'New image',base,'Unknown','Test fixture')

    def test_new_image_does_not_inherit_maps(self):
        record=self.add();self.assertIsNone(record['map_catalog'])
        result=firmware_catalog.build()['images'][-1]
        self.assertEqual(result['shared_map_count'],0)
        self.assertEqual(result['analysis_status'],'Unreviewed')
        self.assertEqual(self.source.read_bytes(),(self.root/record['file']).read_bytes())

    def test_duplicate_hash_is_rejected_without_registry_change(self):
        self.add();before=self.registry.read_bytes()
        with self.assertRaises(ValueError):self.add('other-id')
        self.assertEqual(before,self.registry.read_bytes())
        self.assertFalse((self.root/'firmware/images/other-id.bin').exists())

    def test_bad_id_and_overflow_do_not_create_files(self):
        for key,base in [('../escape',0),('new-image',0x2000),('new-image',-1)]:
            with self.assertRaises(ValueError):self.add(key,base)
        self.assertFalse((self.root/'firmware/images').exists())

    def test_changed_binary_fails_identity_check(self):
        record=self.add();(self.root/record['file']).write_bytes(bytes([1])*59392)
        with self.assertRaises(AssertionError):firmware_catalog.build()


if __name__=='__main__':unittest.main()
