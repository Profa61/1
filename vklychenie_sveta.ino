
#define IK_TUALET 2
#define IK_VANNA 3 
#define RELE_SVET_VANNA 10
#define RELE_SVET_TUALET 11
#define LED_TUALET 9
#define LED_VANNA 8


byte svet = 0;
unsigned long ms  = 0, svetMs = 0;
unsigned int vremya_zadergki_tualet = 300000;
unsigned int vremya_zadergki_vanna = 300000;

void setup(){
  Serial.begin(9600);
  pinMode(IK_TUALET, INPUT_PULLUP);
  pinMode(IK_VANNA, INPUT_PULLUP);
  pinMode(RELE_SVET_VANNA, OUTPUT);
  pinMode(RELE_SVET_TUALET, OUTPUT);
  pinMode(LED_TUALET, OUTPUT);
  pinMode(LED_VANNA, OUTPUT);
}

void loop(){
  ms = millis();
  if (!digitalRead(IK_TUALET))
  
     svet = 10;
     while (!digitalRead(IK_TUALET));
     delay(20);
  
  }


  
switch (svet) {
case 0:
  svetMS = ms;
  break;
  case10:
  if (!digitalRead


