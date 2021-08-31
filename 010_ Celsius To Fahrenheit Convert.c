#include<stdio.h>
 
int main() 
{

  float celsius; 
  float far;
  
  printf("\n  Enter the value of temperature in Celsius --->");
  scanf("%f", &celsius); 
  
  far=(celsius*9/5+32);
  
  printf("\n  The value of thr temperature in  Fahrenheit  is --->%0.2f",far); 
   
    return 0; 
}
