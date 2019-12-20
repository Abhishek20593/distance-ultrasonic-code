
const int trigPin = 7;
const int echoPin = 8;

long duration;
float distance, velocity;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
Serial.begin(9600); 
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance= duration/29/2;
Serial.print("Distance_In_cm: ");
Serial.println(distance);
velocity= (distance/duration);
Serial.print("velocity: ");
Serial.println(velocity);
//Serial.print("time: ");
//Serial.println(duration);
delay(3000);

}

