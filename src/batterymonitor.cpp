#include <Arduino.h>
#include <batterymonitor.h>

BatteryMonitor::BatteryMonitor(int pinBattery)
{
  m_pinBattery = pinBattery;
}

float BatteryMonitor::valorEntrada()
{
  int sensorValue = analogRead(m_pinBattery);
  float voltage = sensorValue * (3.3 / 4095.0);
  voltage = voltage * ((2000 + 1000) / 1000);
  if (voltage >= MAX_VALUE) 
  {
    return 100.0;
  } else if (voltage <= MIN_VALUE) 
  {
    return 0.0;
  } else {
    return (voltage - MIN_VALUE) * 100.0 / (MAX_VALUE - MIN_VALUE);
  }
}
