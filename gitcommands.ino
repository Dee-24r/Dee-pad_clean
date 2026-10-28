#include <Keyboard.h>
#include <Adafruit_NeoPixel.h>

const byte ROWS = 2;
const byte COLS = 3;

// Based on your schematic pins:
// ROW 0 = D3, ROW 1 = D2
// COL 0 = D1, COL 1 = D0, COL 2 = D9
byte rowPins[ROWS] = {3, 2}; 
byte colPins[COLS] = {1, 0, 9}; 

// ========================================
// 2. RGB LEDs — 3 SK6812MINI-E
// ========================================

#define LED_PIN 10  // D10
#define NUM_LEDS 3

Adafruit_NeoPixel leds(
  NUM_LEDS,
  LED_PIN,
  NEO_GRB + NEO_KHZ800
);

// ========================================
// 3. CONFIGURATION
// ========================================

const unsigned long STARTUP_DELAY_MS = 2500;
const unsigned long COMMAND_LOCKOUT_MS = 500;

unsigned long lastCommandTime = 0;
bool initialBootPhase = true;

// ========================================
// 4. LED TEST
// ========================================

void testLEDs() {
  leds.setBrightness(40);
  leds.setPixelColor(0, leds.Color(255, 0, 0));
  leds.setPixelColor(1, leds.Color(0, 255, 0));
  leds.setPixelColor(2, leds.Color(0, 0, 255));
  leds.show();
}

// ========================================
// 5. GIT COMMANDS
// ========================================

void runCommand(const char* command) {
  Keyboard.print(command);
  Keyboard.write(KEY_RETURN);
}

void handleKey(char key) {
  switch (key) {
    case '1':
      runCommand("git add .");
      break;

    case '2':
      runCommand("git commit -m \"Update project\"");
      break;

    case '3':
      runCommand("git status");
      break;

    case '4':
      runCommand("git push");
      break;

    case '5':
      runCommand("git pull");
      break;

    default:
      return;
  }

  lastCommandTime = millis();
}

// ========================================
// 6. SETUP
// ========================================

void setup() {
  Keyboard.begin();

  // Configure Columns as INPUT_PULLUP
  for (int c = 0; c < COLS; c++) {
    pinMode(colPins[c], INPUT_PULLUP);
  }

  // Configure Rows as OUTPUT, default HIGH (inactive)
  for (int r = 0; r < ROWS; r++) {
    pinMode(rowPins[r], OUTPUT);
    digitalWrite(rowPins[r], HIGH);
  }

  leds.begin();
  leds.clear();
  testLEDs();

  delay(STARTUP_DELAY_MS);
  initialBootPhase = false;
}

// ========================================
// 7. MAIN LOOP (Scanning Matrix)
// ========================================

void loop() {
  if (initialBootPhase) {
    return;
  }

  // Scan each row by pulling it LOW
  for (int r = 0; r < ROWS; r++) {
    digitalWrite(rowPins[r], LOW);
    
    // Small delay for signal stabilization
    delayMicroseconds(5);

    for (int c = 0; c < COLS; c++) {
      // If column reads LOW, the switch is closed and current passes through the diode
      if (digitalRead(colPins[c]) == LOW) {
        
        // Rate-limit check
        if (millis() - lastCommandTime >= COMMAND_LOCKOUT_MS) {
          
          // Map coordinates to keys
          if (r == 0 && c == 0) handleKey('1');
          else if (r == 0 && c == 1) handleKey('2');
          else if (r == 0 && c == 2) handleKey(' '); // Space / Encoder click if wired
          else if (r == 1 && c == 0) handleKey('3');
          else if (r == 1 && c == 1) handleKey('4');
          else if (r == 1 && c == 2) handleKey('5');
        }
        
        // Basic software debounce pause
        delay(50);
      }
    }

    // Set row back to HIGH before moving to the next
    digitalWrite(rowPins[r], HIGH);
  }
}