#include <odroid_go.h>
 
void setup() {
  // put your setup code here, to run once:
  GO.begin();
 
  GO.lcd.setTextFont(4);
  GO.lcd.print("Hello, ODROID-GO");
}
 
void loop() {
  // put your main code here, to run repeatedly:
 
}