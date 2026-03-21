#My HackPad

This is my first ever macropad and I can't wait to build it! >> updates soon.

##Overview
![PCB Screenshot](images/pcb.png)
My macropad contains 5 key switches, a rotary encoder with a switch, an OLED display, and 3 RGB LEDs. It uses the [SEEED Xia0 rp-2040](https://wiki.seeedstudio.com/XIAO-RP2040/) microcontroller.

##Repo information

This repo mainly contains the schematic and pcb designs (along with the (custom) symbol and footprint libraries used), the case and pcb cad designs (in .STEP files), gerber files for pcb production (gerber.zip), and the firmware for the macropad. There is also an image folder (If you're scooping around, that's what you should open - it contains screenshot of every necessary file, and so does this README). 

##Details and pics

I decided to make this project because I admire building hardware projects. My first idea for the controls are Git commands in VSCode or any other IDE (e.g. buttons to stage, to commit, push, pull, and more). I plan to have the RGB LEDs indicate information like the status of your branch. Same for the OLED display. I also would love to see what I can do with this when I hack up a game - (coming soon)!

Check out the project submission and journal entries to Statis [https://statis.hackclub.com], one of Hack Club's [https://hackclub.com] event who is funding this project. Thanks Hack Club, thanks Statis.

#More details:

BOM anf bbom file, gerber file and everyother

YOUR README.md FILE CONTAINS THE FOLLOWING:
A short description of what your project is
A couple sentences on why you made the project
PICTURES OF YOUR PROJECT
A screenshot of a full 3D model with your project
A screenshot of your PCB, if you have one
A wiring diagram, if you're doing any wiring that isn't on a PCB
A BOM in table format at the end of the README

## 📊 Bill of Materials (BOM)

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