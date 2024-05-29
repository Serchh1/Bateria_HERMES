#pragma once
#include <Arduino.h>

#define MAX_VALUE 4.17f
#define MIN_VALUE 3.20f

class BatteryMonitor
{
public:
    BatteryMonitor(int pinBattery); //Pin de salida con el valor sensado A0 Constructor
    float valorEntrada(); //Pin de entrada de la bateria return valor %
private:
    int m_pinBattery;
};