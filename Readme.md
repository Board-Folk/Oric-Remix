# Oric Remix

An updated Oric-1 / Oric Atmos board

** Work-in-progress **

![Image of build version 1.1 board in black](https://github.com/Board-Folk/Oric-Remix/blob/main/images/OricRemixIssAv1.1_small.png)

This repository contains the Bill-of-Materials (BOM), Gerbers and Kicad files for an updated Tangerine Oric motherboard found in the Oric-1 and Oric Atmos computers. The board is compatible for system ROM, in software and in form factor with the original board. Improvements include integration of service manual modifications, updated RAM and ROM layout and composite video, with the added intention to make it easier to build. It does not replace any of the core chips including the ULA which is still required.

More information to follow. This has been tested as it is to the best of our ability so far, but as none of the development team currently have any external expansion bus peripherals this has to be considered not fully tested, so build and use with that in mind. We'd like some help to change that!

## Revisions

* Version 1.1 Initial Public Release

### Version 1.1 Modifications from Original

* LM7805 voltage regulator
* 27C512 ROM with 4 bank selector
* Additional AY-3-8910 socket
* Integrated tape mods (inc service manual)
* Replacement /ROMDIS logic
* AD724 composite & stereo sound output
* Speaker volume control
* 4464 RAM
* Additional system reset button
* Commodore 1531 tape interface (optional - original remains on the board)

## Modification Notes

### LM7805

The original Oric boards regulated the negative power rail using a 7905 voltage regulator, keeping the positive rail common across the board and to the power supply. This has been replaced with a 7805 regulator making the ground common instead. This makes it easier to replace the regulator with something more modern and common. It has to be noted though this may cause issues sharing a power adapter with other expansions that also regulate on the negative rail, depending on how they connect to the system through the interface port. If this is the case separate power adapters should be used. We'll be testing this in time, and we're pretty sure this will have caused terrible problems for the original board too as the original regulator doesn't make a whole lot of sense for driving logic.

### ROM replacement and /ROMDIS updated

For the use of EPROMs and the bank selector, /ROMDIS was updated, the logic which allows external expansions to disable the system ROM. This uses IC11 which can no longer be omitted.

A 27C512 EEPROM can be used in chunks of 16KB selectable with the DIP switch. To compile a ROM of this kind, simply concatenate 4 16KB ROM images together, for example in DOS, copy /b rom1.bin+rom2.bin+rom3.bin+rom4.bin bigrom.bin to give you a 64KB file and select each 16KB banks with the switches as binary.

### AY-3-8910 socket

The AY-3-8910 can be fitted instead of the AY-3-8912 sound chip. There's no difference in function and good ones can be found more cheaply.

### Integrated Tape Mods

There were two tape mods, one from the the service manual and one from an assembled original, which have been included on the board. From the service manual page 71, modification 8, R11 and C19 "Improved Cassette Loading". R101 and C101 were also found on an original assembled board. This second mod should not be fitted for boards assembled with the 1531 tape interface.

### AD724 Composite Output

The original PROM based composite generation for the RF modulator wasn't good at all. This has been replaced with an AD724 and a 3.5mm TRRS output jack which also includes Stereo audio out, in the same channel configuration as you'd have on an Amstrad CPC464/6128. Sleeve is ground you'll need an OMTP wired cable connection.

### Speaker Volume Control

The original Oric was too loud. This adjusts the volume. Within the footprint of the volume control, there's a header for connection of an external potentiometer instead.

### System Reset Button

An additional push button has been added, with alternative pin header LK6 for external connection. This is a separate CPU reset, the original pulls down /NMI.

### Commodore 1531 Tape Port

To cut a long story short, tape support isn't great on the Oric, a source tape has to be near perfect, or you need a Maxduino. There was space on the board after all the other mods, and the schematics fitted well. It doesn't need to be fitted which is why the BOM is listed separately. The original tape connection and relay are still there with the original 7 pin DIN on the back. You can fit both fine, so long as R101 and C101 aren't fitted. It's just a cool feature and nice to have, though might upset some purists.

## Keyboard

We'll try get a keyboard replica done as soon as we can, modified for the use of MX or compatible keyswitches. There's at least one other replica already available on the internet.

A prototype PS/2 interface has been completed and works which isn't any use with an original case, but at least makes a functional system. The board also has provision for USB, the code for which hasn't been completed yet. This prototype will be uploaded soon. Still trying to work out how this will work out for a final version and whether that can fit inside a case.

## Build Notes

** Coming soon **

## BOM

### Main BOM

Main BOM including items for Commodore 1531 Cassette. See below. Resistors 1/4W. Ceramic caps 5.08mm. Electrolytics and Tants all radial.

|Qty|Reference(s)|Value|Type|Notes|
|:--:|:--:|:--:|:--:|:--:|
|1|R1|10R|Resistor||
|1|R2|4K7|Resistor||
|10|R4,R7,R9-R11,R13,R40-R42,R56|1K|Resistor||
|1|R101|1K|Resistor|Do not fit for C1531|
|6|R5,R43-R45,R47,R49|10K|Resistor||
|1|R6|220K|Resistor||
|1|R8|100K|Resistor||
|3|R12,R46,R48|22K|Resistor||
|2|R24,R25|47K|Resistor||
|1|R26|2K2|Resistor||
|1|R30|220R|Resistor||
|3|R37-R39|270R|Resistor||
|1|R31|560R|Resistor||
|4|R32,R34-R36|75R|Resistor||
|1|C8|100uF 16V|Electrolytic||
|1|C4|2.2uF 16V|Electrolytic||
|1|C21|10uF 16V|Electrolytic||
|1|C1|22uF 16V|Electrolytic||
|1|C24|220uF 16V|Electrolytic||
|2|C3,C36|100uF Tant|Tantalum||
|1|C33|10pF|Ceramic||
|1|C26|120pF|Ceramic||
|1|C19|2.2nF|Ceramic||
|1|C101|2.2nF|Ceramic|Do not fit for C1531|
|1|C5|10nF|Ceramic||
|1|C9|220nF|Ceramic||
|5|C25,C28,C30-C32|100nF|Ceramic||
|14|C2,C7,C10-C17,C22-C23,C34,C35|47nF|Ceramic||
|1|VC1|5-20pF Trimmer|Trimmer|CVN6500|
|1|D1|1N4148|Small Signal Diode||
|1|D32|3mm LED|LED||
|1|IC1|LM7805|Voltage Regulator||
|1|IC2|LM386|IC||
|1|IC3|LM358|IC||
|1|IC4|AY-3-8912|IC|IC4 or IC10|
|1|IC10|AY-3-8910|IC|Not both|
|1|IC5|6502A|IC||
|1|IC6|6522A|IC||
|1|IC7|HCS10017|IC||
|2|IC8,IC20|74LS257|IC||
|1|IC9|27C128-27C512 ROM|IC||
|1|IC11|74LS00|IC|Clock and /ROMDIS (now a requirement)|
|1|IC21|74LS04|IC||
|1|IC22|74LS365|IC||
|1|IC23|AD724JR|IC||
|1|IC30,IC31|4464 RAM|IC||
|3|TR1-TR3|BC549|Transistor||
|1|RP1|2K2 SIP8 Bussed|Resistor Network||
|1|RP2|220R SIP8 Isolated|Resistor Network||
|1|RP3|10K SIP8 Isolated|Resistor Network||
|1|RV2|5K/10K 3386 Potentiometer|Potentiometer|5K recommended|
|1|SW1|Reset Switch (NMI)|Push Switch|Original or 6mm Push Switch|
|1|SW2|2 position DIP4 Switch|DIP Switch|Optional ROM Bank Selector 0-3 128Kb/512Kb|
|1|SW3|Reset Switch (System)|Push Switch|6mm Push Switch|
|1|RL1|Oki D51A05P|Relay||
|1|LS1|Philips AD2071/Z25|Speaker||
|1|XT1|12MHz|Crystal|HC-49/U recommended|
|1|XT2|4.43MHz|Crystal|HC-49/U recommended|
|1|SK1|5 pin DIN Socket|Socket||
|1|SK2|7 pin DIN Socket|Socket|Short, board pins 2 row, needs recommendation|
|1|SK3|2.1mm DC Barrel Jack|Socket||
|1|SK4|3.5mm TRRS Jack|Socket|PJ320A for OMTP connection|
|1|PL1|2x10 right angle pin header|Header||
|1|PL2|2x17 right angle header|Header||
|1|PL3|14 pin header|Header||

### Commodore 1531 Port BOM

|Qty|Reference(s)|Value|Type|Notes|
|:--:|:--:|:--:|:--:|:--:|
|2|R50,R51|220R|Resistor||
|1|R53|1K|Resistor||
|2|R54,R55|1K5|Resistor||
|1|C37|100nF|Ceramic||
|1|D30|1N4737A|Zener Diode|7.5V|
|1|D31|3mm LED|LED|Motor LED|
|2|TR4,TR5|BC547|Transistor||
|1|TR6|BC337|Transistor||
|1|TR7|TIP29|Transistor|D880 Substitute|
|1|SK5|7 pin mini-DIN|Socket||

## Links

   [Finedon Electronics - Short 7 pin DIN socket](https://www.ebay.co.uk/itm/185588182650) <br>
   [Mike Brown's Diagnostic ROM](https://oric.signal11.org.uk/html/diagrom.htm)

## Credits

Original replica PCB Layout by Rob Taylor (@peepouk) with modifications by Ian Cudlip (@grandoldian). Original PCB, research, assistance and documentation from Chrissy (@chris_jh). Schematics recreated and modifications by Ian Cudlip with suggestions and testing from Chrissy.

## Thanks

* "More Fun Making It" Lee (@morefunmakingit) 
* Marko Šolajić (@msolajic)
* The Board Folk Team

## Legal

As the product of this project is a replica of a proprietary product, the the author makes no claim of copyright to the schematics nor PCB layouts and releases these into the public domain, solely for the purposes of study and historical preservation.

You are free to produce PCBs based on this project's designs at your own risk and without limitation, for your own use or for sale and/or repair at a reasonable price. Attribution is appreciated. The authors are not obliged to provide support of any kind. 

Under no circumstances will the authors be held responsible or liable in any way for losses, damages or costs resulting from the use of the information and/or resources of this project. 

The resources are provided "as-is" without warranty of any kind, either expressed or implied, including, but not limited to, the implied warranties of merchantability and fitness for a particular purpose.
