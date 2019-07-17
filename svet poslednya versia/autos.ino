 void autos(void) {
  //// автомат включения света в туалете
  switch (svet_tualet) {
    case 0:
      svetTualetMs = ms;
      break;

    case 10:
      if ((ms - svetTualetMs) > 500) {
        svetTualetMs = ms;
        digitalWrite(  LED_TUALET, 0);
        digitalWrite(RELE_SVET_TUALET, 0  );
        Serial.println("СВЕТ В ТУАЛЕТЕ ВКЛЮЧЕН");
        mp3_play(1); // проигрываем файл mp3/0001.mp3 
        TUALET_FLAG = 1;
        svet_tualet = 0; //GO
      } //ms

      break;

    case 11:
      if ((ms - svetTualetMs) > 500) {
        svetTualetMs = ms;
        digitalWrite(  LED_TUALET, 1);
        digitalWrite(RELE_SVET_TUALET, 1);
        Serial.println("СВЕТ В ТУАЛЕТЕ ВЫКЛЮЧЕН");
         mp3_play(4); // проигрываем файл mp3/0001.mp3
        TUALET_FLAG = 0;
        svet_tualet = 0; //GO

      } //ms
      break;


  } //switch(svet_tualet)

  // автомат включения света в ванной
  switch (svet_vanna) {
    case 0:
      svetVannaMs = ms;
      break;

    case 10:
      if ((ms - svetVannaMs) > 500) {
        svetVannaMs = ms;
        digitalWrite(LED_VANNA, 0);
        digitalWrite(RELE_SVET_VANNA, 0);
        Serial.println("СВЕТ В ВАННОЙ ВКЛЮЧЕН");
         mp3_play(2); // проигрываем файл mp3/0001.mp3
        VANNA_FLAG = 1;
        svet_vanna = 0; //GO
      } //ms
      break;

    case 11:
      if ((ms - svetVannaMs) > 500) {
        svetVannaMs = ms;
        digitalWrite(LED_VANNA, 1 );
        digitalWrite(RELE_SVET_VANNA, 1);
        Serial.println("СВЕТ В ВАННОЙ ВЫКЛЮЧЕН");
         mp3_play(3); // проигрываем файл mp3/0001.mp3
        VANNA_FLAG = 0;
        svet_vanna = 0; //GO
      } //ms
      break;



  }//switch(svet_vanna)
}//autos()

