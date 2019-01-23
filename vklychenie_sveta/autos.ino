void autos(void) {
  //// автомат включения света в туалете
  switch (svet_tualet) {
    case 0:
      svetTualetMs = ms;
      break;

    case 10:
      if ((ms - svetTualetMs) > 1000) {
        svetTualetMs = ms;
        digitalWrite(  LED_TUALET, 1);
        Serial.println("СВЕТ В ТУАЛЕТЕ ВКЛЮЧЕН");
        svet_tualet = 0; //GO
      } //ms
      
      break;

    case 11:
      if ((ms - svetTualetMs) > 1000) {
        svetTualetMs = ms;
        digitalWrite(  LED_TUALET, 0);
        Serial.println("СВЕТ В ТУАЛЕТЕ ВЫКЛЮЧЕН");
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
      if ((ms - svetVannaMs) > 1000) {
        svetVannaMs = ms;
        digitalWrite(LED_VANNA, 1);
        Serial.println("СВЕТ В ВАННОЙ ВКЛЮЧЕН");
        svet_vanna = 0; //GO
      } //ms
      break;

    case 11:
      if ((ms - svetVannaMs) > 1000) {
        svetVannaMs = ms;
        digitalWrite(LED_VANNA, 0);
        Serial.println("СВЕТ В ВАННОЙ ВЫКЛЮЧЕН");
        svet_vanna = 0; //GO
      } //ms
      break;
  }//switch(svet_vanna)
}//autos() 

