#define sensor A0
int valorSensor = 0;
float voltaje = 0;
float temperatura = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  valorSensor = analogRead(sensor);
  Serial.print("Valor Sensor: ");
  voltaje = valorSensor *5;
  voltaje = voltaje / 1024;
  temperatura = voltaje /0.01;
  Serial.println(temperatura);
  delay(1000);
}



