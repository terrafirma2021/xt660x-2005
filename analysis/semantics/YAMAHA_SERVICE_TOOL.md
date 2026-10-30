# Yamaha service-tool communication evidence

The owner supplied a decompiled `YamahaServiceTool.Communication` C# project for review on 2026-10-30. It provides useful independent protocol evidence, but **does not complete the XT660X physical-unit decoding**. No map scale has been promoted on this evidence alone.

Assembly metadata identifies YAMAHA DIAGNOSTIC TOOL, Yamaha Motor Co., Ltd., informational version 3.0.0.0, file version 1.0.0.0 and copyright 2015. These are source metadata claims, not an authenticated signature. The [source manifest](yamaha_service_tool_sources.json) records hashes of reviewed files; third-party source is not redistributed here.

## Findings

| Finding | Source location | Consequence for this XT image |
|---|---|---|
| Legacy Meter connections request 15,625 baud | `Communication.cs`, `ConnectMeter`; `PassThru/PassThruProtocol.cs`, baud enum | Supports the nominal 16 MHz bus / 500 kHz timer profile, without measuring this ECU |
| RPM is received byte 1 times `RPMResolution`, plus `MeterEngineRpmOffset`, cast to unsigned 16-bit | `COAdjust/COAdjustMeter.cs`, `Read` and `ReadRpmAndLamp` | Establishes conversion structure, but not the XT multiplier or offset |
| Legacy RPM resolution initializes from `(byte)YDSCommon.MeterEngineRpmMax` | `ECU/ECUInformation.cs`, constructor; `Communication.cs`, `InitConnectMeter` | The field named Max supplies the multiplier; its actual value must be traced in the caller |
| Both public RPM settings initialize to zero, with no later assignment in this project | `YamahaMotor/YDSCommon.cs` and project-wide reference search | Unset defaults, not usable XT calibration |
| Newer paths read tacho-scale record FE | `ECU/ECUInformation.cs`, `ReadRPMResolution`; `Protocol/RecordLocalIdentifier.cs`; `Communication.cs`, `InitConnectMeter14230` | A KWP record query, distinct from the XT legacy FE handshake; support is not established in this dump |
| Meter reads return the received byte array without physical conversion | `DataMonitor/DataMonitorMeter.cs`, `Read`; `DataMonitor/MonitorDatum.cs` | This path supplies no coolant, IAT, pressure or voltage display formulas |
| Monitor scanning probes IDs 1–47 and 128–191; returned byte 4 equal to 255 denotes unavailable | `DataMonitor/DataMonitorMeter.cs`, `Scan` | Tool behavior, not proof all IDs work on this XT revision |
| CO value is byte 4 minus 128; warning state uses byte 3 bit 7 | `COAdjust/COAdjustMeter.cs`, `Read` | Compatible with the firmware's biased CO and status roles; adapter framing still matters |

## Timing corroboration

Target SCI1 divisor 64 and timer prescaler 32, combined with the conditional MC9S12T64 peripheral model, give:

```text
bus = 15,625 baud * 16 * 64 = 16,000,000 Hz
timer = bus / 32 = 500,000 Hz
tick = 2 microseconds
```

This supports the nominal timer profile previously inferred from the manual's fan-test cadence. It does not establish the target's missing boot configuration, oscillator, crank pulses per revolution or mechanical TDC phase. It cannot alone finalize every RPM axis, injector duration or absolute spark angle.

The target divides selected speed code by 190 for telemetry. The nominal internal conversion code/5.12 would imply an ideal telemetry step of 37.109375 RPM before quantization. This library has a configurable byte-valued multiplier and an offset, but no XT values. The earlier guessed logger multiplier of 50 remains unvalidated.

## Adapter messages versus raw ECU frames

`DiagTool.SendRequestCode` sends the adapter two bytes: request code and count. It checks returned byte 0 against the request code. Consumers use byte 1 for RPM, byte 3 for status and byte 4 for the selected value. `PassThru.ReadMsgs` removes the adapter response header and returns its payload; it does not implement the adapter's meter-protocol firmware.

The [target's raw reply](DIAGNOSTICS.md) contains four payload bytes followed by an additive checksum: RPM at B0, speed at B1, status at B2, selected value at B3. Tool offsets are consistent with an adapter-provided leading request code, but exact transformation and checksum handling need adapter evidence or a paired capture. Do not index raw XT replies using the tool's array positions, or transmit the adapter's two-byte request directly to the ECU.

`ReadUnitTemperature` calls a PassThru adapter IOCTL. It is not a coolant conversion and supplies no coolant Celsius/Fahrenheit formula.

## Next source to trace

The missing information is in the calling application or its definitions:

1. Trace assignments to `MeterEngineRpmMax` and `MeterEngineRpmOffset`, including vehicle/model selection.
2. Follow the caller of `DataMonitorMeter.Read` to sensor display values and unit labels.
3. Establish definition applicability to the 2005 XT660X.
4. Compare display formulas with ECU lookup, fault substitution and telemetry quantization. Wire-value formulas are not automatically map-cell formulas.

The project references external Dao, DaoManager, Resources and RepFile assemblies. These are leads, not proof of where particular formulas reside. The referenced DiagnosticTool installation directory was absent. No calibration database or numeric XT RPM settings were found in this communication project.

This was static source review, not execution or a live ECU test. Firmware and calibration values remain unchanged. See [temperature hypotheses](TEMPERATURE_PROFILE.md), [earlier project comparisons](EXTERNAL_SCALE_CHECKS.md) and [wider definition research](WIDER_SCALING_RESEARCH.md).
