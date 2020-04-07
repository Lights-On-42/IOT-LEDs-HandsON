// nun zu unserem ersten Programm was auch wirklich was macht

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
  erstFunktion(LOW);
  erstFunktion(HIGH);
}

void erstFunktion(bool neuerZustand)
{ 
  //schalten des Pin's auf 0 Volt
  digitalWrite(LED_PIN, neuerZustand);
  //Warten von 2 sekunden
  delay(2000);
}
