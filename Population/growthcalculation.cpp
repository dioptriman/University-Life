#include "growthcalculation.h"
#include <stdlib.h>
#include "ui_mainwindow.h"
#include "mainwindow.h"

GrowthCalculation::GrowthCalculation()
{

}

void GrowthCalculation::setValue(long int newVal)
{
    InitPopVal = newVal;
}

void GrowthCalculation::setValue2(int newVal2)
{
    GrowthVal = newVal2;
}

int GrowthCalculation::calc(float newVal2)
{
    int growthThisYear;
    float result;
    int year=1;
    float randomGrowth;
    for(int i = year; i <= 75; i++)
    {
       randomGrowth = newVal2 + rand() % 5;
       growthThisYear = result * (randomGrowth/100.0);
       result = result + InitPopVal * (randomGrowth/100.0);
    }
    return result;
}

void GrowthCalculation::display(int year, long newVal, int newVal2)
{

}
