
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

  //очень важно помечать все закрывающие фигурные   скобки комментариями, к чему относится скобка

}// setup


void loop(){
  ms = millis();
  // здесь после ИФ тоже пропущены открывающие и закрывающие фигурные скобки. 
  // в зависимости от того где ты поставишь закрывающую, логика программы может сильно измениться.
  if (!digitalRead(IK_TUALET)) 
  
     svet = 10;
     while (!digitalRead(IK_TUALET));
     delay(20);

  // не правильный синтаксис был, после switch() должно идти тело функции свич, оно всегда в фигурных скобках.
// кроме того сама функция свич не может жить вне функции loop в данном случае

switch (svet){ 
case 0:
  svetMS = ms;
  break;
}      //switch(svet)


  
  
  
  //очень важно помечать все закрывающие фигурные   скобки комментариями, к чему относится скобка 
  } // loop   


  
