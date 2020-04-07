#include <Adafruit_NeoPixel.h>

// wir legen fest das der D4 PIN für die Kommunikation benutzt wird
uint16_t NeoPIN =D4;
// wir legen fest das es drei LED's im stripe gibt
uint16_t NUM_LEDS =3;

Adafruit_NeoPixel strip;

void setup() 
{
  Serial.begin(115200);
  pinMode(NeoPIN, OUTPUT);
  strip = Adafruit_NeoPixel(NUM_LEDS, NeoPIN, NEO_RGB + NEO_KHZ800);
  strip.setBrightness(50);
  strip.begin();

  // eine Zahlschleife diese Schleife läuft dreimal durch 
  for(int i=0;i<NUM_LEDS;i++)
  {
    // wir legen fest das das alle LED#S grün ist
    strip.setPixelColor(i, strip.Color(255,0,0));
    //wir legen fest das nun der streifen geupdatet wird
    strip.show(); 
  }

}

void loop() 
{ 
  String text= Serial.readString();
  if(text.length()!=0)
  {
    //Text ausgeben
    Serial.print(text);
    for(int i=0;i<NUM_LEDS;i++)
    {
      // wir legen fest das das alle LED#S blau ist
      strip.setPixelColor(i, strip.Color(0,0,255));
      //wir legen fest das nun der streifen geupdatet wird
      strip.show(); 
    }
  }
  
}
