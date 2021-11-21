#ifndef GROWTHCALCULATION_H
#define GROWTHCALCULATION_H


class GrowthCalculation
{
public:
    GrowthCalculation();
    void setValue(long int newVal);
    void setValue2(int newVal2);
    int calc(float newVal2);
    void display(int year, long int newVal, int newVal2);
private:
    int GrowthVal;
    int InitPopVal;
};

#endif // GROWTHCALCULATION_H
