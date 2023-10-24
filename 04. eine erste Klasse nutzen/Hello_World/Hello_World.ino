// nun nutzen wir unsere erste Klasse
// Eine Klasse ist eine Sammlung von Funktionen die ein andere Programmierer programmiert hat
// Und für eine Aufgabe für andere Bereit gestellt hat
// Die Serial Klasse stellt Funktionen bereit welche dazu da sind mit einem angesteckten Computer über 
// USB Text auszutauschen 
// Hier stellen wir vor wie man den Monitor des Arduiono's schreiben kann
// Öffne hierfür unter "Werkzeuge" --> "Serial Monitor"

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
  // wir warten 2 sekunden
  delay(2000);
}
