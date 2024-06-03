#pragma once
#include <Arduino.h>

#define MAX_VALUE 4.17f
#define MIN_VALUE 3.20f

class BatteryMonitor
{
public:
    BatteryMonitor(int pinBattery); // Constructor
    float valorEntrada(); // Devuelve el valor en porcentaje
private:
    int m_pinBattery;
};