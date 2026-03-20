# deepad
I'm still editing this readme.

Deepad contains 5 keys, a rotary encoder (along with the switch, so we hve 6 switches), 3 rgb leds, and an OLED display. It will be compatible with VIA.

- Keyboard Maintainer: [Oluwafunmilayo Oshebeyo](https://github.com/Dee-24r)
- Processor: RP2040
- Bootloader: rp2040
- Matrix: 2 rows x 3 cols, COL2ROW
- Repository URL: [myHackpad](https://github.com/Dee-24r/myHackpad)

## Features Enabled

- VIA
- OLED (SSD1306)
- RGB Lighting (WS2812)
- Rotary Encoder (with encoder map)
- Media/Mouse key support
- NKRO
 
## Pin Mapping

- Matrix columns: GP27, GP26, GP4
- Matrix rows: GP29, GP28
- Encoder A/B: GP2, GP1
- WS2812 data: GP3 (It's the SK6812MINI-E in the macropad itself)
- OLED I2C SDA/SCL: GP6, GP7