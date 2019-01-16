/* компилятор не указывает ни каких ошибок,выдает оштбку компиляции для платы*/

#define RUKA 0
#define IK_TUALET 2
#define IK_VANNA 3
#define RELE_SVET_VANNA 10
#define RELE_SVET_TUALET 11
#define LED_TUALET 9
#define LED_VANNA 8


byte svet = 0;
unsigned long ms  = 0, svetms = 0;

unsigned int vremya_zadergki_tualet = 10000;
unsigned int vremya_zadergki_vanna = 10000;

void setup() {
  Serial.begin(115200);
  pinMode(IK_TUALET, INPUT_PULLUP);
  pinMode(IK_VANNA, INPUT_PULLUP);
  pinMode(RELE_SVET_VANNA, OUTPUT);
  pinMode(RELE_SVET_TUALET, OUTPUT);
  pinMode(LED_TUALET, OUTPUT);
  pinMode(LED_VANNA, OUTPUT);
} // setup

void loop() {
  // Serial.print("IK_TUALET=");
  // Serial.print(digitalRead(IK_TUALET));
  //Serial.print("svet=");
  // Serial.println(svet);
  // Serial.print("IK_VANNA=");
  // Serial.print(digitalRead(IK_VANNA));
  //Serial.print("svet=");
  // Serial.println(svet);
  ms = millis();
  if (digitalRead(IK_TUALET) == RUKA) {

    svet = 10;
    while (!digitalRead(IK_TUALET) == RUKA);
    delay(20);
  }//if TUALET
  if (digitalRead(IK_VANNA) == RUKA) {

    svet = 12;
    while (!digitalRead(IK_VANNA) == RUKA);
    delay(20);


  } //if VANNA




  switch (svet) {
    case 0:
      svetms = ms;

      break;

    case 10:
      if ((ms - svetms) > 1000) {
        svetms = ms;
        digitalWrite(RELE_SVET_TUALET, 1);
        Serial.print(" tualet vklychen");
        svet = 11;
      } //ms
      break;




    case 11:
      if ((ms - svetms) > vremya_zadergki_tualet ) {
        svetms = ms;
        digitalWrite(RELE_SVET_TUALET, 0);
        Serial.print("tualet viklychen");

      } //ms
      break;



    case 12:

      if ((ms - svetms) > 100) {
        svetms = ms;
        digitalWrite(RELE_SVET_VANNA, 1);
        Serial.print(" vanna vklychen");
        svet = 13;
      } //ms
      break;

    case 13:

      if ((ms - svetms) > vremya_zadergki_vanna ) {
        svetms = ms;
        digitalWrite(RELE_SVET_VANNA, 0);
        Serial.print("vanna viklychen");
      } //ms
      break;


  } //switch
}// loop

