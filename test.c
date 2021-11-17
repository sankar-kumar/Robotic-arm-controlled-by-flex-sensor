Flex sensor controlled robotic arm
#include <Servo.h>
#define SO AO //Sensor Pin SO
#define S1 A1 //Sensor Pin S1
#define S2 A2 //Sensor Pin S2
Servo myservol;
Servo myservo2;
Servo myservo3;
int sensorValue1 = 0;
int sensorValue2= 0;
int sensorValue3= 0;
int vall, val2, val3;
void setup()
{
myservo1.attach(8);
myservo2.attach(9);
myservo3.attach(12);
}
void loop()
{
//Reading Analog Value
int sensorValue 1 = analogRead(SO);
delay(150);
int sensorValue2 = analogRead(S1);
delay(150);
int sensorValue2 = analogRead(S2);
//Displaying Analog Value
Serial.print("sensorValue");
Serial.print(" ");
Serial.print(sensorValuet);
Serial.print(" ");
Serial.print("sensorValue2");
Serial.print(" ");
delay(150);
//Action
int sensorValue1= analogRead(AO);
 
//mapped values from flexsensor
myservo1.write(vall);
delay(50);
int sensorValue2 = analogRead(A1);
//mapped values from flexsensor2
val2 = map (sensorValue2, 477, 710, 0, 180);
myservo2.write(val2);
delay(50);
int sensorValue3 = analogRead(A2);
val3 = map (val3, 237, 340, 0, 180); //mapped values from flexsensor3
delay(50);)


