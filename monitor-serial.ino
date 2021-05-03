void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);   // lê o valor de entrada no pino A0:
  Serial.println(sensorValue);        // imprime o valor lido:
}
