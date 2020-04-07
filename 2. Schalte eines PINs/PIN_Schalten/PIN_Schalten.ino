// nun zu unserem ersten Programm was auch wirklich was macht
// wir müssen hierfür die LED an dem ESP anbringe
// das Kurze ende muss auf den GND PIN und das Lange an den PIN D0

// eine Variable in einer Variable werden Werte gespeichert diese können auch verändert werden.
// Hier erstellen wir eine Variable mit dem Namen "LED_PIN" diese ist von einem Typ "uint16_t"
// Und legen fest das in dieser Variable eine Zahl gespeichert werden.
// Durch diese spezielle Zahl weis der ESP welcher PIN gemeint ist 
uint16_t LED_PIN=D0;


void setup() 
{
  // hier legen wir fest das wir auf diesem Pin etwas ausgeben wollen
  // vereinfacht gesagt ist der PIN ein Schalter und wir legen fest 
  // das wir den Schalter vom Programm aus schalten möchten
  pinMode(LED_PIN, OUTPUT);
}

void loop() 
{
  //schalten des Pin's auf 0 Volt
  digitalWrite(LED_PIN, LOW);
  //Warten von 2 sekunden
  delay(2000);
  //schalten des Pin's auf High also auf 3,3 Volt damit wird die LED leuchten
  digitalWrite(LED_PIN, HIGH);
  //Warten von 2 sekunden
  delay(2000);
  //das programm läuft weiter und startet wieder bei Loop
}
