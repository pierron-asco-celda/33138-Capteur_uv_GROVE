/*
 *   ** Mesure indice UV module Grove **
       PIN A0 Module shield GROVE
       Baud rate 9600 -> Moniteur série
*/

void setup() {

  Serial.begin(9600);
}

void loop()
{
  int sensorValue;
  long  sum = 0;
  for (int i = 0; i < 1024; i++)
  {
    sensorValue = analogRead(A0);
    sum = sensorValue + sum;
    delay(2);
  }
  long meanVal = sum / 1024;
  Serial.print("Indice UV :");
  Serial.print((meanVal * 1000 / 4.3 - 83) / 21);
  Serial.print("\n");
  delay(20);
}
