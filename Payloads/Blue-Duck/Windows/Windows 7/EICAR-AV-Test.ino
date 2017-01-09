/*
 * Orignial Script By Tim Mattison
 * Converted By Darren Rainey
*/

#include "Keyboard.h"

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("notepad.exe");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("X5O!P%@AP[4\\PZX54(P^)7CC)7}$EICAR-STANDARD-ANTIVIRUS-TEST-FILE!$H+H*");

  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('s');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("%USERPROFILE%\\desktop\\eicar.com");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}
/* LED Code Loop */
void loop() {
int ledPin = 2;
digitalWrite(ledPin, HIGH);
}