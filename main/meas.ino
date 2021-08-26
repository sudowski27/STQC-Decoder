/*
 This file contains functions for measure frequency of audio signal, and
 function for describe how use it to 

 ADC_IN <- A pin where connect audio signal
 TRESH_HOLD <- value of voltage when peak is interpreting
 * 
 */


#define ADC_IN A0
#define TRESH_HOLD

int measure( )
{
  int value;
  value = analogRead(ADC_IN);  // single measure
  return value;
}
