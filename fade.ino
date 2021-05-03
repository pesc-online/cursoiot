/*
      Luminosidade de um LED com variação por meio do PWM
      Um loop aumenta a luminosidade aos poucos e depois outro loop diminui esta luminosidade.
*/
                        // utilizamos variáveis para definir os números dos pinos
int led = 9;            // o número do pino ligado ao LED, no caso o 9

                        // e também utilizamos variáveis para guardar valores
int lum;                // luminosidade do LED
int valor = 5;          // valor para ser reduzido ou aumentado na luminosidade

void setup() {
  
  pinMode(led, OUTPUT);    // inicialização do pino do LED (pino 9) como saída 
}

void loop() { 
  
  for (lum = 0; lum < 255; lum = lum + valor) {     // loop condicional
                                // lum inicia com 0 e aumenta com a variável valor até chegar a 255
    analogWrite(led, lum);      // escreve a luminosidade no pino 9, pino do LED   
    delay(30);                  // espera 30 milisegundos para ver o efeito de mudança
  }
  
  for (lum = 255; lum > 0; lum = lum - valor) {     // loop condicional
                                // lum inicia com 255 e diminui com a variável valor até chegar a 0
    analogWrite(led, lum);
    delay(30);
  }
}
