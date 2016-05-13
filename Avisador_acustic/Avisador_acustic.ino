/*************************************************************************
**                                                                      **
**                            Projecte 5.                               **
**                         Avisador acustic                             **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int altavoz = 9;   
int ldr1 = A0;        
int ldr2 = A1;         
int ldr3 = A2;        
int durada;   

//Definir variable
int=vldr1;
int=vldr2;
int=vldr3;
  

//****** secup ***********************************************************
{
// Actualitzar valors dels Ldr
  vLdr1 = analogRead(ldr1);
  vLdr2 = analogRead(ldr2);
  vLdr3 = analogRead(ldr3);


  
}

//****** Loop ************************************************************
void loop()
{
  // Atualizacio del valors dels LDR
  vLdr1 = analogRead(ldr1);
  vLdr2 = analogRead(ldr2);
  vLdr3 = analogRead(ldr3);

  // Comparar valors per saber de quin LDR dona la durada del so
  durada = min(vLdr1, vLdr2); 
  durada = min(vLdr3, durada);


  //Temps de durada del so
 tone(altaveu, 1000, durada);

 //Retard entre fases
 delay(3*durada);

 
}
  

