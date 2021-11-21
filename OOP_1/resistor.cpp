#include "resistor.h"


//Constructor
Resistor::Resistor()
{

}

void Resistor::setValue(int newVal)
{
    val = newVal;
}

int Resistor::getValue()
{
    return val;
}

int Resistor::series(int newVal)
{
    int temp;
    temp = val + newVal;
    return temp;
}

float Resistor::parallel(int newVal)
{
    float temp2;
    temp2= 1.0 / ((1.0/val) + (1.0/newVal));
    return temp2;
}
