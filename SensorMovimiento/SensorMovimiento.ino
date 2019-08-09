#define sensor 8
bool statusSensor = false;

void setup() {
  pinMode(sensor,INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  statusSensor = digitalRead(sensor);
  if(statusSensor == HIGH){
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(6000);  
    }
  else{
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    }              
}
