/*
 *  Windows 7 Logoff/Shut down prank by Darren Rainey 
 *  http://youtube.com/DarrenRainey
 *  This script will open the start menu and either press the
 *  shutdown or log off button depending on how the target is 
 *  set uo
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

  // Script by Darren Rainey http://github.com/DarrenRainey
  delay(500);

  typeKey(KEY_LEFT_GUI);

  delay(150);

  typeKey(KEY_TAB);

  delay(150);

  typeKey(KEY_TAB);

  delay(150);

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
