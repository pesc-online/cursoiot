  // a função setup() é executada uma vez quando você pressiona reset ou liga a placa
void setup() {
    // inicializa o pino digital 13 como uma saída
  pinMode(13, OUTPUT);
}

  // a função loop() é executada repetidamente 
void loop() {
  digitalWrite(13, HIGH);   // liga o LED (HIGH é o nível de tensão)
  delay(1000);              // espera um segundo
  digitalWrite(13, LOW);    // desliga o LED tornando a tensão BAIXA
  delay(1000);              // espera um segundo
}
