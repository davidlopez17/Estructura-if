/****************************************************************
**                             TÍTOL:                          **
**                            Nom del programa:                **
**                                                             **
**    Nom: Alumne                       Data: xx/xx/20xx       **
**                                                             **
****************************************************************/
//**************************INCLUDE******************************



//**************************VARIABLES****************************
int tempAigua = 100;

//**************************SETUP********************************

void setup() {              //configura el final de la sortida
  // put your setup code here, to run once:
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua < 100){
    Serial.print("Aigua encara no bull");
  }

  else {
    Serial.print("Aigua bullint!");
  } 
  
  
}

//***************************************************************

void loop() {               //iniciar bucle del programa
  // put your main code here, to run repeatedly:

}

//***************************FUNCIONS****************************
