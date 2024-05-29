#include <Arduino.h>
#include <batterymonitor.h>

BatteryMonitor::BatteryMonitor(int pinBattery)
{
  m_pinBattery = pinBattery;
}

float BatteryMonitor::valorEntrada()
{
  float voltage = (m_pinBattery) * (5.00 / 1024.00)*3;
  float percentage = (voltage - MIN_VALUE) / (MAX_VALUE - MIN_VALUE) * 100.0; //Calcula el procentaje de 0 a 100
  return constrain(percentage, 0.0, 100.0); //Restringe el porcentaje de 0 a 100
}
