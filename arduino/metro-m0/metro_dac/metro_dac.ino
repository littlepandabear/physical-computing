/*
  Fading

  This example shows how to fade an LED using the analogWrite() function.

  The circuit:
  - LED attached from digital pin 9 to ground.

  created 1 Nov 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fading
*/

#define ledPin A0    // LED connected to digital pin 9

void setup() {
  // nothing happens in setup
}

void loop() {
	//use 0-65535 on Metro A0
	for (int i = 0; i < 65535; i+=1){
  		analogWrite(ledPin, i); //use 0-65535 on Metro A0
		delay(1);
	}

}
