#ifndef RESISTOR_H
#define RESISTOR_H

#include <QObject>

class Resistor
{
public:
    Resistor();
    void setValue(int newVal);
    int getValue();
    int series(int newVal);
    float parallel(int newVal);
private:
    int val;
};

#endif // RESISTOR_H
