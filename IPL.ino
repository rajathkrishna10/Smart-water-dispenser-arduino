const int trigPin = 9;
const int echoPin = 10;
const int relayPin = 8;
long duration;
int distance;
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  // Pump OFF initially
  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.println(distance);
  if (distance > 0 && distance <= 10) {
    digitalWrite(relayPin, HIGH);  
  } else {
    digitalWrite(relayPin, LOW); 
  }
  delay(200); 
}
