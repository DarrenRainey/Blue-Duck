/* Nyancat/Troll Payload For Digispark
 * By Darren Rainey 28/11/2017 (28th Novermber 2017)
 * Currently uses a work around to open the start menu with the
 * Digispark on windows 10 asd uses the windows 10 search bar
 * to load the nyancat youtube video by running the chrome.exe
 * command with a url passed to it
 */

#include "DigiKeyboard.h"

void setup() {
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT);

DigiKeyboard.println("chrome.exe https://www.youtube.com/embed/QH2-TGUlwu4?rel=0&autoplay=1");
DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
}
