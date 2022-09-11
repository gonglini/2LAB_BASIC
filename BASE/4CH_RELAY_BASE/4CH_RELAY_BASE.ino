int Relaypin1 = 7;
int Relaypin1 = 6;
int Relaypin1 = 5;
int Relaypin1 = 4;

void setup() {
  // put your setup code here, to run once:

  pinMode(Relaypin1, OUTPUT);
  pinMode(Relaypin2, OUTPUT);
  pinMode(Relaypin3, OUTPUT);
  pinMode(Relaypin4, OUTPUT);

}

void loop() {
  digitalWrite(Relaypin1, LOW);
  delay(1000);

  digitalWrite(Relaypin1, HIGH);
  delay(1000);

  digitalWrite(Relaypin2, LOW);
  delay(1000);
  
  digitalWrite(Relaypin2, HIGH);
  delay(1000);

  digitalWrite(Relaypin3, LOW);
  delay(1000);

  digitalWrite(Relaypin3, HIGH);
  delay(1000);

  digitalWrite(Relaypin4, LOW);
  delay(1000);

  digitalWrite(Relaypin4, HIGH);
  delay(1000);

}
