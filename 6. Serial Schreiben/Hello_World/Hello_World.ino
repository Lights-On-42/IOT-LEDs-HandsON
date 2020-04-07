// nun erweitern wir unsere Kommunikation das nicht nur unser ESP uns Text senden kann 
// Sondern der Comuter kann nun auch eine Nachricht an den ESP senden kann
// Öffne hierfür unter "Werkzeuge" --> "Serial Monitor"
// und gebe in die Text Zeile einen Text ein und klicke auf senden der 
// selbst geschriebene Text geht an den ESP und wird wieder auf dem Monitor ausgegeben

// Zähler in welcher Schleifendurchgang wir uns befinden
uint16_t counter=0;

void setup() 
{
  // Seriale Kommunikation initialiezieren
  Serial.begin(115200);
  // in den Monitor Hello World schreiben
  Serial.println("Hello World");
}

void loop() 
{
  // in den Monitor die zahl schreiben wie oft wir uns schon durch Loop bewegt haben
  Serial.print(counter);
  // in den Monitor Loop schreiben
  Serial.println("Loop");
  //wir erhöhen den Counter um 1
  counter=counter+1;

  //hier ist nun der neue Code abschnitt
  // wir lesen aus der Klasse ob ein neuer Text angekommen ist
  String text= Serial.readString();
  //und nun schreiben wir ihn wieder in den Monitor
  Serial.println(text);
  
  // wir warten 2 sekunden
  delay(2000);
}
