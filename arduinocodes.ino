const int trigPin = 9;   // trigpin of the ultrasonic sensor
const int echoPin = 10;  // echopin of the ultrasonic sensor
void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  // trigger the ultrasonicsensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // reads the echoduration and calculates the distance
  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.0343 / 2 +14.0;  // converts to centimeters
  // calculate the vertical height using the tangent of 60 degrees (approx. 1.7321)
  float verticalheights = distance * 1.7321;
  Serial.println("Horizontal Distance (cm): " + String(distance) + "\n" + "Vertical Height (cm): = tan(60) x  " + String(distance) + " =  " + String(verticalheights) + "\n");//_______
//  Serial.println(distance);
//  Serial.print("Vertical Height (cm): = tan(60) x  ");
//  Serial.print(distance);
//  Serial.print(" =  ");
//  Serial.println(verticalheights);
//

  delay(1000);  // Delay for 1 second before the next measurement
    Serial.println(""); Serial.println("");Serial.println("");Serial.println("");Serial.println(""); delay(1000);  // Delay for 1 second before the next measurement


}