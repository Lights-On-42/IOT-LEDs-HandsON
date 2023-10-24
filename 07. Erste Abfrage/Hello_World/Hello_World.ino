// nun erweitern wir um unsere erste Abfrage
// das Programm soll nur noch den eingegebenen Text darstellen wenn auch wirklich 
// ein Text gesendet wurde

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

  // if ist eine Abfrage 
  // wir fragen ab ob die Länge der Klasse des enthalten Textes ungleich 0 ist und nur
  // wenn dies gegeben ist dann geben wir den enthaltenen Text aus
  if(text.length()!=0)
  {
    //Text ausgeben
    Serial.print(text);
  }
  
  // wir warten 2 sekunden
  delay(2000);
}
