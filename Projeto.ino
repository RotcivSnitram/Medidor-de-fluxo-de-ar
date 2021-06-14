#define sensorPin A0                       // define entrada analógica A0

int sensorValue = 0;                       // variável inteiro igual a zero
int ledPin1 = 13;                          // LED conectado a porta 13
int ledPin2 = 12;                          // LED conectado a porta 12
int ledPin3 = 11;                          // LED conectado a porta 11
int ledPin4 = 10;                          // LED conectado a porta 10

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  Serial.begin(9600);                      // monitor serial - velocidade 9600 Bps
  delay(1000);                             // atraso de 1000 milisegundo
}

void loop() 
{
  sensorValue = analogRead(sensorPin);     // leitura da entrada analógica A0

  if (sensorValue > 281)                   // condição para acender o LED
  digitalWrite(ledPin1, HIGH);
  else                                     // condição para não acender o LED
  digitalWrite(ledPin1, LOW);

  if (sensorValue > 283)                   // condição para acender o LED
  digitalWrite(ledPin2, HIGH);
  else                                     // condição para não acender o LED
  digitalWrite(ledPin2, LOW);

  if (sensorValue > 285)                   // condição para acender o LED
  digitalWrite(ledPin3, HIGH);
  else                                     // condição para não acender o LED
  digitalWrite(ledPin3, LOW);

  if (sensorValue > 287)                   // condição para acender o LED
  digitalWrite(ledPin4, HIGH);
  else                                     // condição para não acender o LED
  digitalWrite(ledPin4, LOW);
    
  Serial.print("    Valor: ");             // imprime no monitor serial
  Serial.println(sensorValue);             // imprime o valor para controle e calibração
  delay(100);                              // atraso de 1000 milisegundos
}
