This is the clean folder (omiting junk and system files) for https://github.com/Dee-24r/My_Hackpad (which I'm still pushing files to by the way).

# Deepad
I'm currently still assembling my macropad and updating the repo as I do.

## Overview
![PCB Screenshot](images/cad_design_cool_view.png) <br><br>
My macropad contains 5 key switches, a rotary encoder with a switch, an OLED display, and 3 RGB LEDs. It uses the [SEEED Xiao RP2040](https://wiki.seeedstudio.com/XIAO-RP2040/) microcontroller.

## Repo info

This repo contains the design files (electrical and cad) for deepad v.1.0, :) my macropad. I added the schematic and pcb designs (along with the (custom) symbol and footprint libraries used), the case and pcb cad designs (in .STEP files), gerber files for pcb production (gerber.zip), and the firmware for the macropad. There is also an image folder (If you're scooping around, this is what you should open - it contains screenshots of every important file/design, and so does this README).

[Go to cad files](deepad_cad/)<br>
[Go to firmware](deepad_firmware/)<br>
[Go to schematic and pcb](deepad_sch_and_pcb/)<br>
[View screenshot of all files](images/) This is where you want to go!


## Making my macropad - with pics
I tried to make this to be journal-like cuz I enjoyed doing it. I hope I was detailed enough!


Components I designed it with:
![Components](images/projectComponents.jpeg) <br><br>

- 1x unsoldered Seeed XIAO RP2040 - the microcontroller
- 5x MX-Style switches - basically keys (keyboard keys)
- 1x EC11 Rotary encoder - it's like a knob and produces rotational value
- 1x 0.91 inch OLED display - display screen
- 5x white blank DSA keycaps - keycaps for the keys
- 3x SK6812 MINI-E LEDs - these are rgb leds
- 4x M3x16mm screws - for screwing my top and bottom case together
- 4x M3x5mx4mm heatset inserts - same as last one - they go together
- 6x 1N4148 diodes -  for the keys

I began by designing the schematic and pcb: added all my components and wired them.

![Schematic Screenshot](images/schematic.png)

I assigned footprints and routed the PCB, and learned to use vias. I added edge cuts and exported my STEP file to use in Fusion 360.

![PCB Screenshot](images/pcb.png)

And these are 3d views of the pcb (front and back)

![PCB 3d view front Screenshot](images/pcb_3dview_front.png)
![PCB 3d view back Screenshot](images/pcb_3dview_back.png)

BRUH! If you're thinking everything went smooth and step by step, This was not the case! :)

Fusion 360 was a hassle! It's not a bad software; I just didn't know how to use it. But I'm glad I learned.

I started by drawing rectangles for the base of my case, adding holes for the screws and then extruding the shape - outer part of the case is 13mm deep and the inner is 3mm thick. I then attached my PCB .step file to "project" (I had so much trouble understanding how this worked) but got through it anyways. I projected my base case (not recursion :|) to make my top case, which was also 3mm thick. I rounded all my edges a bit and then added the holes for the keys and other components. Finally I added the usb cutout and extruded all holes. I later came back to add a few text decorations to the design (creative enough -- chee!) Here's my full cad design:

![CAD screenshot](images/cad_design_cool_view.png)

Next stage was the firmware! You can open up [the firmware folder](deepad_firmware/) to see all the code. It conatins the keyboard.json, rules.mk, config.h, and keymap.c files (keymap.c will still be edited to match my key functions).

I used QMK MSYS to create the folder and then edited the code to match my keys and board. And that was it!

I've soldered most of the parts onto my board. I've actually made more progress after this picture. I'll update the repo later.
![Assembly so far](images/pcbassemblyprogress27th.jpeg) <br>

Everything I did, I did with the help of many friends in the stasis and blueprint channels, and with much *searching online and asking AI many many many questions*. I'm happy with my work and can't wait to start using it!!

## Macropad use
My first idea for the controls are Git commands in VSCode or any other IDE (e.g. buttons to stage, to commit, push, pull, and more). I plan to have the RGB LEDs indicate information like the status of your branch. Same for the OLED display.

I also would love to see what I can do with this when I hack up a game - (coming soon)! My macropad is made compatible with via, so I'll be using it for many things for sure.