// nun machen wir unsere Abfrage ewas anders aber mit dem selben Ziel

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

  // hier neu
  // Wir erstellen eine Klasse mit dem namen text vom Typ String
  // In dieser Klasse können wir Text speichern und zusätzlich noch einige Parameter 
  // Abfrage z.B. die länge des empfangenen Textes ist diese nicht gleich 0 dann ist
  // kein Text enthaten
  String text= Serial.readString();

  //wir prüfen nun auf gleichheit
  if(text.length()==0)
  {
    //der Text hat also keine Zeichen dementsprechend müssen wir nix machen
  }
  else
  {
    //der oder Zweig wenn die abfrage nicht erfolgreich war dann kommen wir hier rein
    //Text ausgeben
    Serial.print(text);
  }
  // wir warten 2 sekunden
  delay(2000);
}
