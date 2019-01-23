void sensors(void){
  
   if( digitalRead (IK_TUALET)== RUKA  && digitalRead (LED_TUALET) == 0) {
   
     
     while (!digitalRead(IK_TUALET));
    delay(20);
    svet_tualet = 10; 
  
    
   } //if TUALET
  
  
   if (digitalRead(IK_TUALET) == RUKA  && digitalRead (LED_TUALET) == 1){ 
    
    
    while (!digitalRead(IK_TUALET));
    delay(20);
   svet_tualet = 11; 
    
   } //if TUALET
  


  if (digitalRead(IK_VANNA) == RUKA && digitalRead (LED_VANNA) == 0) {
    

    while (!digitalRead(IK_VANNA));
    delay(20);
    svet_vanna = 10;
    
    
  } //if VANNA


  if (digitalRead(IK_VANNA) == RUKA && digitalRead (LED_VANNA) == 1) {
    
 
    while (!digitalRead(IK_VANNA));
    delay(20);
    svet_vanna = 11;
    
    
  } //if VANNA*/
  
}//sensors()

