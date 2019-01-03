
#define IK_tualet 2
#define IK_vanna 3 
#define rele_svet_vanna 10
#define rele_svet_tualet 11
#define Led_tualet 9
#define Led_vanna 8


byte svet = 0;
unsigned long ms  = 0, svetMs = 0;
unsigned int vremya_zadergki_tualet = 300;
unsigned int vremya_zadergki_vanna = 300;

void setup(){
  Serial.begin(9600);
  pinMode(IK_tualet, INPUT_PULLUP);
  pinMode(IK_vanna, INPUT_PULLUP);
  pinMode(rele_svet_vanna, OUTPUT);
  pinMode(rele_svet_tualet, OUTPUT);
  pinMode(Led_tualet, OUTPUT);
  pinMode(Led_vanna, OUTPUT);
}

void loop(){
  ms = millis();
  if (!digitalRead(IK_tualet))
  
     svet = 10;
     while (!digitalRead(IK_tualet));
     delay(20);
     
        digitalWrite(Led_tualet, 1);
        digitalWrite(rele_svet_tualet, 1);
     
    
  }


  


