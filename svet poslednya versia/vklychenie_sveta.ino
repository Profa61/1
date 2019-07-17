#include <SoftwareSerial.h>    // библиотека для для обмена данными 
#include <DFPlayer_Mini_Mp3.h> // подключаем библиотеку для DFPlayer Mini



boolean TUALET_FLAG = 0;
boolean VANNA_FLAG = 0;
#define RUKA 0
#define IK_TUALET 2
#define IK_VANNA 3
#define RELE_SVET_VANNA 10
#define RELE_SVET_TUALET 11
#define LED_TUALET 9
#define LED_VANNA 8
#define BUZZER 4
// автоматы
byte svet_tualet = 0, svet_vanna = 0;
// переменные для временных отсчетов
unsigned long ms  = 0, svetTualetMs = 0, svetVannaMs = 0, buzzerMs = 0;

// пользовательские задержки
unsigned int vremya_zadergki_tualet = 500;
unsigned int vremya_zadergki_vanna = 500;
unsigned int vremya_buzzer = 100;
void setup() {
  Serial.begin(9600);
 mp3_set_serial(Serial); // включаем передачу данных с DFPlayer mini mp3
    delay(1);              // задержка в 1ms для установки громкости
    mp3_set_volume(30);     // устанавливаем громкость от 0 до 30
    mp3_set_EQ(5);          // устанавливаем эквалайзер от 0 до 5
  
  pinMode(IK_TUALET, INPUT_PULLUP);
  pinMode(IK_VANNA, INPUT_PULLUP);
  pinMode(RELE_SVET_VANNA, OUTPUT);
  pinMode(RELE_SVET_TUALET, OUTPUT);
  pinMode(LED_TUALET, OUTPUT);
  pinMode(LED_VANNA, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite( RELE_SVET_VANNA, 1);
  digitalWrite( RELE_SVET_TUALET, 1);
  digitalWrite(LED_TUALET, 1);
  digitalWrite(LED_VANNA, 1);
} // setup

void loop() {
  // Serial.println("IK_TUALET=");
  // Serial.println(digitalRead(IK_TUALET));
  // Serial.println("svet_tualet=");
  //  Serial.println(svet_tualet);
  // Serial.println("IK_VANNA=");
  // Serial.println(digitalRead(IK_VANNA));
  //Serial.println("svet=");
  // Serial.println(svet);




  ms = millis();

  sensors(); // обрабатываем датчики
  autos(); //управляем светом
  
}// loop
