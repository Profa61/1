void sensors(void) {


  if ( digitalRead (IK_TUALET) == RUKA  && (TUALET_FLAG) == 0) {

    while (!digitalRead(IK_TUALET));

    digitalWrite (BUZZER, 1);
    delay(20);
    digitalWrite (BUZZER, 0);
    svet_tualet = 10;


  } //if TUALET


  if (digitalRead(IK_TUALET) == RUKA  && (TUALET_FLAG) == 1) {


    while (!digitalRead(IK_TUALET));


    digitalWrite(BUZZER, 1);
    delay(20);
    digitalWrite(BUZZER, 0);
    svet_tualet = 11;


  } //if TUALET



  if (digitalRead(IK_VANNA) == RUKA && (VANNA_FLAG) == 0) {


    while (!digitalRead(IK_VANNA));
    digitalWrite(BUZZER, 1);
    delay(20);
    digitalWrite(BUZZER, 0);
    svet_vanna = 10;


  } //if VANNA


  if (digitalRead(IK_VANNA) == RUKA && (VANNA_FLAG) == 1) {


    while (!digitalRead(IK_VANNA));

    digitalWrite (BUZZER, 1);
    delay(20);
    digitalWrite(BUZZER, 0);
    svet_vanna = 11;


  } //if VANNA*/

}//sensors()

