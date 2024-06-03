#include <Arduino.h>
#include <batterymonitor.h>

BatteryMonitor batteryMonitor(A0); // Utiliza el pin A0 para leer la batería

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    float batteryPercentage = batteryMonitor.valorEntrada(); // Lee el porcentaje de la batería
    Serial.print("Porcentaje de la bateria: ");
    Serial.println(batteryPercentage);

    delay(1000); // Espera un segundo antes de la siguiente lectura
}
