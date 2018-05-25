/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
float energia = 43.2;

//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( energia > 0 && energia < 3.6)
{
  Serial.print("Energia A");
}
  else if (3.5 < energia && energia<6.6)
{
  Serial.print("Energia B");
}
  else if (6.5 < energia && energia<11.2)
{
  Serial.print("Energia C");
}
  else if (11.1< energia && energia<17.8)
{
  Serial.print("Energia D");
}
  else if (17.7 < energia && energia<38.3)
{
  Serial.print("Energia E");
}
  else if (38.2 < energia && energia<43.2)
{
  Serial.print("Energia F");
}
  else if (energia > 43.1)
{
  Serial.print("Energia G");
}
}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
