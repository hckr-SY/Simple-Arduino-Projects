int redpin=10;
int greenpin=11;
int readpin=A1;
float readval;
int dt=200;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readpin,INPUT);
pinMode(redpin,OUTPUT);
pinMode(greenpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readval=analogRead(readpin);
Serial.println(readval);
if (readval>=200) {
  digitalWrite(greenpin,HIGH);
  digitalWrite(redpin,LOW);
}
if (readval<150) {
  digitalWrite(greenpin,LOW);
  digitalWrite(redpin,HIGH);
}
delay(dt);
}
