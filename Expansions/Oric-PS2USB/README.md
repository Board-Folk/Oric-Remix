# Oric-PS2USB

![Image of PS2 build version 1 board in green](https://github.com/Board-Folk/Oric-Remix/blob/main/images/Oric-PS2USBv1_PS2_Small.png)

This is currently a prototype board to prove the schematic and code for doing something a bit better. The board contains footprints for both the Arduino Nano and Mini-DIN socket for PS/2 and the Seediuno Xiao for USB. Only populate one or the other.

It won't fit in an original case - it's not intended for that. It's suitable to get going with the Oric if you've no keyboard available - board only if you like. Better than no keyboard at all. The main board will need a 14 pin header fitting with pins long enough to reach the socket, approx 14mm above the component side of the board.

So far only the code for the Nano PS/2 assembly has been completed.

In the future, alongside more useful maybe a much reduced version in size we'll also do an MX keyboard similar to that of the Atmos - though this has already been done by others if you Google.

## BOM

The BOM is quite simple.

### PS/2

|Qty|Reference(s)|Value|Type|Notes|
|:--:|:--:|:--:|:--:|:--:|
|1|C1|47nF|Ceramic||
|1|C2|47uF|Electrolytic||
|1|R1|470R|Resistor||
|1|R2|10K|Resistor||
|1|D17|LED|3MM LED||
|1|U1|MT8816AE1|IC|DIP-40 Version|
|1|U2|Nano|Arduino||
|1|U3|CD4051|IC||
|1|PL1|14 pin socket|Socket Header||
|1|J3|6 pin Mini-DIN Socket|PS/2 Socket||

### USB

To follow.

## Code

The Arduino folder contains the code for the PS/2 interface and can be loaded with Arduino IDE. This is based on C64Keyboard by Robert VanHazinga. Key mappings can be found in keymapping.h - these are calculated from the spreadsheet "orickeyboard.ods" also in the Arduino folder.
