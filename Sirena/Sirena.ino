/*************************************************************************
**                                                                      **
**                            Projecte 4.Sirena                         **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int durada;        // temps de durada
int freq;          // frecuencia correspondiente a la nota
int pin9 = 9;      // pin del zumbador
  
    

//****** secup ***********************************************************

void setup(){
}

//****** Loop ************************************************************
void loop() {
durada = analogRead(A0)*10;
freq = analogRead(A1);
 
tone(pin9,freq,durada); 
delay(10000);
}
