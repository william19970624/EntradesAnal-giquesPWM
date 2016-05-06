/******************************************************************************
**                                                                           **
**                      Projecte  Morse                                      **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************

const int pin = 9;

int note = 1047;
int velocitat = 10;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
//G_guillermo
ratlla();
ratlla();
punt();
//espai entre lletres
espaiL();
//U_guillermo
punt();
punt();
ratlla();
//espai entre lletres
espaiL();
//I_guillermo
punt();
punt();
//espai entre lletres
espaiL();
//L_guillermo
punt();
ratlla();
punt();
punt();
//espai entre lletres
espaiL();
//L_guillermo
punt();
ratlla();
punt();
punt();
//espai entre lletres
espaiL();
//E_guillermo
punt();
//espai entre lletres
espaiL();
//R_guillermo
punt();
ratlla();
punt();
//espai entre lletres
espaiL();
//M_guillermo
ratlla();
ratlla();
//espai entre lletres
espaiL();
//O_guillermo
ratlla();
ratlla();
ratlla();
//espai entre lletres
espaiP();
//W_will
punt();
ratlla();
ratlla();
//espai entre lletres
espaiL();
//I_will
punt();
punt();
//espai entre lletres
espaiL();
//L_will
punt();
ratlla();
punt();
punt();
//espai entre lletres
espaiL();
//L_will
punt();
ratlla();
punt();
punt();
//espai entre lletres
espaiP();
//s_see
punt();
punt();
punt();
//espai entre lletres
espaiL();
//E_see
punt();
//espai entre lletres
espaiL();
//E_see
punt();
//espai entre lletres
espaiP();
//y_your
ratlla();
punt();
ratlla();
ratlla();
//espai entre lletres
espaiL();
//o_your
ratlla();
ratlla();
ratlla();
//espai entre lletres
espaiL();
//u_your
punt();
punt();
ratlla();
//espai entre lletres
espaiL();
//r_your
punt();
ratlla();
punt();
//espai entre lletres
espaiP();
//d_death
ratlla();
punt();
punt();
//espai entre lletres
espaiL();
//e_death
punt();
//espai entre lletres
espaiL();
//a_death
punt();
ratlla();
//espai entre lletres
espaiL();
//t_death
ratlla();
//espai entre lletres
espaiL();
//h_death
punt();
punt();
punt();
punt();
//espai entre lletres
espaiP();
}
//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

