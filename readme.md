This is the clean folder (omiting junk and system files) for https://github.com/Dee-24r/My_Hackpad

# My HackPad
This is the design for my first ever macropad.

## Overview
![PCB Screenshot](images/cad_design_cool_view.png)
My macropad contains 5 key switches, a rotary encoder with a switch, an OLED display, and 3 RGB LEDs. It uses the [SEEED Xia0 rp-2040](https://wiki.seeedstudio.com/XIAO-RP2040/) microcontroller.

I can't wait to start assembling and soldering! >> will update when I do.

## Repo information

This is the clean folder (omiting junk and system files) for https://github.com/Dee-24r/My_Hackpad. This repo mainly contains the schematic and pcb designs (along with the (custom) symbol and footprint libraries used), the case and pcb cad designs (in .STEP files), gerber files for pcb production (gerber.zip), and the firmware for the macropad. There is also an image folder (If you're scooping around, that's what you should open - it contains screenshot of every important file/design, and so does this README).

[Go to cad files](deepad_cad/)
[Go to firmware](deepad_firmware/)
[Go to schematic and pcb](deepad_sch_and_pcb/)
[Go to schematic and pcb](images/) This is where you want to go!

[Go to cad files](#-bill-of-materials-bom)


## Making my macropad - with pics
This is my first time creating a macropad. I began by designing the schematic and pcb, following a tutorial which only added 3 keys and the microcontroller. I then learned to add other components - the rotary encoder, the OLED display and RGB leds.

![PCB Screenshot](images/schematic.png)

Next, I assigned footprints, and updated my PCB. I wired the PCB and learned to use vias. After wiring, I added the edge cuts and exported my STEP file to use in Fusion 360.

![PCB Screenshot](images/pcb.png)

And these are 3d views of the pcb (front and back)

![PCB Screenshot](images/pcb_3dview_front.png)
![PCB Screenshot](images/pcb_3dview_back.png)

I love the way I'm just listing steps, and you're probably thinking everything went smooth and step by step <3. This was not the case!

Fusion 360 was a hassle! It's not a bad software; I just didn't know how to use it. But I'm glad I learned.

I drew the 
Everything I did, I did with the help of and with much searching online.
I'm up till 1a.m. writing this README because why have I not shipped my project?


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