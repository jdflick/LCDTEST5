// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(0, 1, 2, 3, 4, 5);


void setup(){
	// set up the LCD's number of columns and rows:
	lcd.begin(16, 2);
	lcd.print("Disobey meatbags");
        // specify second row
        lcd.setCursor(0,1);
	lcd.print("Destroy Humans!");
} //end "setup()"

void loop(){

} // end loop()

