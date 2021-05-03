/*
    Código de leitura em pino analógico: potenciômetro e LED
    A frequência na qual o LED pisca depende da leitura de A0.
*/

int pinoPot = A0;   // pino de entrada do potenciômetro
int pinoLED = 13;   // pino de saída no LED
int valorPot = 0;   // variável c/ valor lido do potenciômetro

void setup() {
  
  pinMode(pinoLED, OUTPUT);   // declarando o pino do LED como saída (OUTPUT)
}

void loop() {

  valorPot = analogRead(pinoPot);     // lendo o valor do sensor
 
  digitalWrite(pinoLED, HIGH);        // Liga o LED
  delay(valorPot);                    // para o programa por <valorPot> milissegundos
  digitalWrite(pinoLED, LOW);         // desliga o LED
  delay(valorPot);                    // para o programa por <valorPot> milissegundos:
}
