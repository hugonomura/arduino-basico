// Projeto 3 - Semáforo

int ledDelay = 1000; // espera entre as alterações
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

// executa repetidas vezes
void loop() {
  
  digitalWrite(redPin, HIGH); // acende a luz vermelha
  delay(ledDelay); // espera 5 segundos

  digitalWrite(yellowPin, HIGH); // acende a luz amarela
  delay(2000); // espera 2 segundos

  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
  digitalWrite(yellowPin, LOW);
  delay(ledDelay);

  digitalWrite(yellowPin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(2000);

  digitalWrite(yellowPin, LOW);

}
