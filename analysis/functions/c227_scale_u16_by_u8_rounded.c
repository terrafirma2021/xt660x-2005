/* Entry c227 */

/* WARNING: Removing unreachable block (RAM,0xc23d) */

undefined2 scale_u16_by_u8_rounded(short param_1,byte *param_2)

{
  return CONCAT11(0xff7f < (ushort)*param_2 * param_1,(char)((ushort)*param_2 * param_1 + 0x80 >> 8)
                 );
}


