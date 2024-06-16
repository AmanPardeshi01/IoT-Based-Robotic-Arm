#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h> 
#include <Servo.h>
 
char auth[] = "ee3xN4gZ0O9mo8VYQj6ozrJaGPX_E2Gt";

char ssid[] = "Aman"; //Enter your Wifi User Name
char pass[] = "87654321"; //Enter your Wifi Password

Servo servo;
Servo servo1;
Servo servo2;
Servo servo3;

BLYNK_WRITE(V3)
{
servo.write(param.asInt());
}

BLYNK_WRITE(V0)
{
servo1.write(param.asInt());
}

BLYNK_WRITE(V1)
{


servo2.write(param.asInt());
}

BLYNK_WRITE(V2)
{
servo3.write(param.asInt());
}

void setup()
{
Serial.begin(9600);

Blynk.begin(auth,ssid,pass);

servo.attach(D0);
servo1.attach(D1);
servo2.attach(D2);
servo3.attach(D3);
}

void loop()
{
Blynk.run();
}
