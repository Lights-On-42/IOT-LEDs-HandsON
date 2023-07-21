#include <Adafruit_NeoPixel.h>

// Wir legen fest, dass PIN D4 für die Kommunikation benutzt wird
uint16_t NeoPIN =D4;
// Wir legen fest, dass der Strip drei LED hat
uint16_t NUM_LEDS =3;

// Wir erstellen eine Referenz auf eine Klasse namens "strip" vom Typ Adafruit_NeoPixel
Adafruit_NeoPixel strip= Adafruit_NeoPixel(NUM_LEDS, NeoPIN, NEO_RGB + NEO_KHZ800);

void setup() 
{
  strip.setBrightness(50);
  strip.begin();
}

void loop() 
{ 
  // eine Zahlschleife diese Schleife läuft dreimal durch 
  for(int i=0;i<NUM_LEDS;i++)
  {
    // wir legen fest das das alle LED#S grün ist
    strip.setPixelColor(i, strip.Color(255,0,0));
  }
  //wir legen fest das nun der streifen geupdatet wird
  strip.show(); 
  //wir warten 1 sekunde
  delay(1000);
  for(int i=0;i<NUM_LEDS;i++)
  {
    // wir legen fest das das alle LED#S blau ist
    strip.setPixelColor(i, strip.Color(0,0,255));
  }
  //wir legen fest das nun der streifen geupdatet wird
  strip.show(); 
  delay(1000);
}
