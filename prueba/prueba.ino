
int sensorpin = 0;                 // El pin es usado para conectar el sensor SHARP
int val = 0;                 // Variable para almacenar valores del sensor

void setup()
{
  Serial.begin(9600);         
  }
 
void loop()
{
  val = analogRead(sensorpin);       // Lee el valor del sensor 
  Serial.println(val);            // Muestra el valor en pantalla para su monitoreo
  delay(100);                    // Espera antes del siguiente valor
}
