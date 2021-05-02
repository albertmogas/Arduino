/**********************************************************************************
**                                                                               **
**                              Fade LEDs                                        **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************


//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
const int buttonPin = 2;        // donar nom al pin 2 de l'Arduino
int velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT);    // definir el pin 2 com una entrada
}


//********** Loop *****************************************************************
void loop()
{
  if (digitalRead(buttonPin) == 0)
  {

          }
          else
          {

          }
 }
//********** Funcions *************************************************************
