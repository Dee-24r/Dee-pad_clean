This is the clean folder (omiting junk and system files) for https://github.com/Dee-24r/My_Hackpad (which I'm still pushing files to by the way).

# Deepad
This repo contains the design files (electrical and cad) for deepad v.1.0, :) my first ever macropad.

## Overview
![PCB Screenshot](images/cad_design_cool_view.png) <br>
My macropad contains 5 key switches, a rotary encoder with a switch, an OLED display, and 3 RGB LEDs. It uses the [SEEED Xia0 rp-2040](https://wiki.seeedstudio.com/XIAO-RP2040/) microcontroller.

I can't wait to start assembling and soldering! >> will update when I do.

## Repo info

This is the clean folder (omiting junk and system files) for https://github.com/Dee-24r/My_Hackpad. This repo mainly contains the schematic and pcb designs (along with the (custom) symbol and footprint libraries used), the case and pcb cad designs (in .STEP files), gerber files for pcb production (gerber.zip), and the firmware for the macropad. There is also an image folder (If you're scooping around, this is what you should open - it contains screenshots of every important file/design, and so does this README).



### Repo content

[Go to cad files](deepad_cad/)<br>
[Go to firmware](deepad_firmware/)<br>
[Go to schematic and pcb](deepad_sch_and_pcb/)<br>
[View screenshot of all files](images/) This is where you want to go!


### README content

[How I made my macropad](#making-my-macropad---with-pics)<br>
[Bill of Materials](#-bill-of-materials-bom)


## Making my macropad - with pics
This is my first time creating a macropad. Here are the components I've designed it with:
- 1x unsoldered Seeed XIAO RP2040 - the microcontroller
- 5x MX-Style switches - basically keys (keyboard keys)
- 1x EC11 Rotary encoder - it's like a knob and produces rotational value
- 1x 0.91 inch OLED display - display screen
- 5x white blank DSA keycaps - keycaps for the keys
- 3x SK6812 MINI-E LEDs - these are rgb leds
- 4x M3x16mm screws - for screwing my top and bottom case together
- 4x M3x5mx4mm heatset inserts - same as last one - they go together


I began by designing the schematic and pcb, following a tutorial which only added 3 keys and the microcontroller. I then learned to add other components - the rotary encoder, the OLED display and RGB leds.

![Schematic Screenshot](images/schematic.png)

Next, I assigned footprints, and updated my PCB. I wired the PCB and learned to use vias. After wiring, I added the edge cuts and exported my STEP file to use in Fusion 360.

![PCB Screenshot](images/pcb.png)

And these are 3d views of the pcb (front and back)

![PCB 3d view front Screenshot](images/pcb_3dview_front.png)
![PCB 3d view back Screenshot](images/pcb_3dview_back.png)

BRUH! The way I'm just listing steps and you're probably thinking everything went smooth and step by step <3. This was not the case!

Fusion 360 was a hassle! It's not a bad software; I just didn't know how to use it. But I'm glad I learned.

I started by drawing rectangles for the base of my case, adding holes for the screws and then extruding the shape - outer part of the case is 13mm deep and the inner is 3mm thick. I then attached my PCB .step file to "project" (I had so much trouble understanding how this worked) but got through it anyways. I projected my base case (not recursion :|) to make my top case, which was also 3mm thick. I rounded all my edges a bit and then added the holes for the keys and other components. Finally I added the usb cutout and extruded all holes. I later came back to add a few text decorations to the design (creative enough -- chee!) Here's my full cad design:

![CAD screenshot](images/cad_design_cool_view.png)

Next stage was the firmware! You can open up [the firmware folder](deepad_firmware/) to see all the code. It conatins the keyboard.json, rules.mk, config.h, and keymap.c files (keymap.c will still be edited to match my key functions).

I used QMK MSYS to create the folder and then edited the code to match my keys and board. And that was it!

Everything I did, I did with the help of many friends in the statis and blueprint channels, and with much *searching online and asking AI many many many questions*. I'm happy with my work and I can't wait to start assembling and soldering.


## Macropad use
I decided to make this project because I admire building hardware projects. My first idea for the controls are Git commands in VSCode or any other IDE (e.g. buttons to stage, to commit, push, pull, and more). I plan to have the RGB LEDs indicate information like the status of your branch. Same for the OLED display.

I also would love to see what I can do with this when I hack up a game - (coming soon)! My macropad is made compatible with via, so I'll be using it for many things for sure.

**More updates on next steps coming soon.**

Big Thank you to Statis [https://statis.hackclub.com], one of Hack Club's [https://hackclub.com] events - funding this project. Thanks Hack Club, Thanks Statis.

## Bill of Materials (BOM)

| Name | Quantity | Cost Per Item (USD) | Total (USD) | Purpose | Distributor | Link |
|------|----------|---------------------|-------------|---------|-------------|------|
| AliExpress shipping and fees | 1 | $2.27 | $2.27 | Shipping | AliExpress | [Link](https://www.aliexpress.us/p/trade/confirm.html?availableProductShopcartIds=81025195134366,81025054474920,81025239479329,81025054362285,81025088699059,81025088643368&aeOrderFrom=main_shopcart&intentionalPayMethod=&curPageLogUid=1774064517052_SwJmHd&spm=a2g0o.cart.0.0) |
| DigiKey tax and shipping | 1 | $7.84 | $7.84 | Shipping | DigiKey | [Link](https://www.digikey.com/ordering/Ship) |
| M3x5x4mm heatset inserts | 99 | $0.01 | $0.99 | Secure threading for M3 screws | AliExpress | [Link](https://www.aliexpress.us/item/2255800046543591.html) |
| M3x16mm screws | 10 | $0.10 | $1.00 | Secure case assembly | AliExpress | [Link](https://www.aliexpress.us/item/3256805692722422.html) |
| 1U keycaps | 10 | $0.23 | $2.30 | Covering for switches | AliExpress | [Link](https://www.aliexpress.us/item/3256807312571573.html) |
| 5-pin PCB-mount switches | 10 | $0.27 | $2.70 | Detect key presses | AliExpress | [Link](https://www.aliexpress.us/item/3256806239135691.html) |
| SK6812MINI-E RGB LEDs | 10 | $0.28 | $2.80 | Visual lighting and feedback | AliExpress | [Link](https://www.aliexpress.us/item/3256805154503907.html) |
| 0.91" SSD1306 OLED display | 1 | $1.79 | $1.79 | Displays information and animations | AliExpress | [Link](https://www.alibaba.com/product-detail/p_1601269142088.html) |
| EC11 rotary encoder | 1 | $4.49 | $4.49 | Rotational input and button control | DigiKey | [Link](https://www.digikey.com/en/products/detail/alps-alpine/EC11E18244AU/19529126) |
| Seeed XIAO RP2040 | 1 | $4.68 | $4.68 | Main microcontroller and control unit | DigiKey | [Link](https://www.digikey.com/en/products/detail/seeed-technology-co-ltd/102010428/14672129) |

**Total cost: $30.94**