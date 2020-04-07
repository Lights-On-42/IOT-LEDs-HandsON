// wir laden eine Bibliothek in unser Projekt
// diese Bibliothek steuert die Kommunikation mit den LED's
// hierfür müssen nun die Pin's erstmal angesteckt werden
// der 5 Volt muss an 3 Volt der GND auf GND und der DIN muss auf D4 
#include <Adafruit_NeoPixel.h>

// wir legen fest das der D4 PIN für die Kommunikation benutzt wird
uint16_t NeoPIN =D4;
// wir legen fest das es drei LED's im stripe gibt
uint16_t NUM_LEDS =3;

//wir erstellen eine Klasse mit dem Namen strip
Adafruit_NeoPixel strip;

void setup() 
{
  //wir legen fest das der PIN D4 als Output genutzt wird
  pinMode(NeoPIN, OUTPUT);
  //wir initializieren den Stripe
  strip = Adafruit_NeoPixel(NUM_LEDS, NeoPIN, NEO_RGB + NEO_KHZ800);
  // wir setzen die Helligkeit auf 50
  strip.setBrightness(50);
  // wir starten die LEd'S
  strip.begin();

  // wir legen fest das das 0.LED rot ist
  strip.setPixelColor(0, strip.Color(0,255,0));
  // wir legen fest das das 1.LED blau ist
  strip.setPixelColor(1, strip.Color(0,0,255));
  // wir legen fest das das 2.LED grün ist
  strip.setPixelColor(2, strip.Color(255,0,0));
  //wir legen fest das nun der streifen geupdatet wird
  strip.show(); 
}

void loop() 
{
}
