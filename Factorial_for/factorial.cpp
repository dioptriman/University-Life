#include "factorial.h"

factorial::factorial()
{

}

void factorial::setValue(int newVal)
{
    val = newVal;
}

int factorial::getValue()
{
    return val;
}

int factorial::factorialfor()
{
   int temp;
   temp = 1;
   for(int i = val; i > 0; i--)
   {
       temp *= i;
   }
   return temp;
}

int factorial::factorialdo()
{
    int temp;
    temp = 1;
    int y = val;
    do
    {
      temp *= y;
      y --;
    }
    while(y > 0);
    return temp;
}
