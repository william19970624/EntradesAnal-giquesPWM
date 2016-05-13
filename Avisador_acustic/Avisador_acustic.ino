/*************************************************************************
**                                                                      **
**                            Projecte 5.                               **
**                         Avisador acustic                             **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int altaveu = 9;   
int ldr1 = A0;        
int ldr2 = A1;         
int ldr3 = A2;        
int durada;   

//Gaurdar variable
int vldr1;
int vldr2;
int vldr3;
  

//****** Setup ***********************************************************
void setup()
{
  pinMode(altaveu, OUTPUT);     // Definir altaveu com a sortida
  pinMode (9, OUTPUT);
  }

//****** Loop ************************************************************
void loop()
{
  // Atualizacio del valors dels LDR
  vldr1 = analogRead(ldr1);
  vldr2 = analogRead(ldr2); 
  vldr3 = analogRead(ldr3);

  // Comparar valors per saber de quin ldr dona la durada del so
  durada = min(vldr1, vldr2); 
  durada = min(vldr3, durada);

    

  //Temps de durada del so
   tone(altaveu, 1000, durada);

 //Retard entre fases
 delay(2*durada);

 
}
  

