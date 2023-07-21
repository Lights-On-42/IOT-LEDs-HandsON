// Wir laden eine Bibliothek in unser Projek, die die Kommunikation mit den LED's steuert.
// Hierfür müssen nun die Pins erstmal angesteckt werden: 5 Volt an 3 Volt, GND an GND und DIN auf D4.
// Unter Tools --> Manage Librarys --> NeoPixel --> Install Adafruit DMA neopixel Library 1.3.0
#include <Adafruit_NeoPixel.h>



// Wir legen fest, dass PIN D4 für die Kommunikation benutzt wird
uint16_t NeoPIN =D4;
// Wir legen fest, dass der Strip drei LED hat
uint16_t NUM_LEDS =3;

// Wir erstellen eine Referenz auf eine Klasse namens "strip" vom Typ Adafruit_NeoPixel
Adafruit_NeoPixel strip= Adafruit_NeoPixel(NUM_LEDS, NeoPIN, NEO_RGB + NEO_KHZ800);;

void setup() 
{
  // und setzen die Helligkeit auf 50
  strip.setBrightness(50);
  // Zuletzt starten wir die LEDs
  strip.begin();
}

void loop() 
{
  // Wir setzen die erste LED (LED 0) auf rot,
  strip.setPixelColor(0, strip.Color(0,255,0));
  // die zweite LED (LED 1) auf blau
  strip.setPixelColor(1, strip.Color(0,0,255));
  // und die letzte LED (LED 2) auf grün.
  strip.setPixelColor(2, strip.Color(255,0,0));
  // Zuletzt aktualisieren wir den Streifen, die Farbwerte werden nun an die LEDs gesendet.
  strip.show(); 
}
