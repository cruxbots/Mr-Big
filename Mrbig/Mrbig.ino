#define BLYNK_PRINT Serial


#include <SoftwareSerial.h>
SoftwareSerial SwSerial(9, 10); // RX, TX
const int enb=6;
const int in4=12;
const int in3=11;
const int ena=3;
const int in2=5;
const int in1=4;    
#include <BlynkSimpleSerialBLE.h>
#include <SoftwareSerial.h>

char auth[] = ""; // put your own char auth, you can find it how to do it on Blynk website...... Go on don't be shy........ come on......

SoftwareSerial SerialBLE(9, 10); // RX, TX

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin 1

BLYNK_WRITE(V0)
{
  int button=param.asInt();
  if(button==1)
  {
     digitalWrite(in4,HIGH);
  digitalWrite(in3,LOW);
  
  digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
  }
  else if(button==0)
  {
    digitalWrite(in4,LOW);
  digitalWrite(in3,HIGH);
  
  digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);
  }
}
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
 
  analogWrite(enb,pinValue);
   }
BLYNK_WRITE(V2)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
   
  analogWrite(ena,pinValue);
   }

BLYNK_WRITE(V3)
{
  int pinValue=param.asInt();
  if(pinValue==1)
  {
  digitalWrite(in1,HIGH);
   digitalWrite(in2,LOW);
    digitalWrite(in4,LOW);
  digitalWrite(in3,HIGH);
   analogWrite(ena,255);
   analogWrite(enb,255);
   delay(500);
  }
  else
  {
   digitalWrite(in1,HIGH);
   digitalWrite(in2,HIGH);
    digitalWrite(in4,HIGH);
  digitalWrite(in3,HIGH);
  analogWrite(ena,0);
   analogWrite(enb,0);
   delay(200);
  }
}
BLYNK_WRITE(V4)
{
  int pinValue=param.asInt();
  if(pinValue==1)
  {
  digitalWrite(in1,LOW);
   digitalWrite(in2,HIGH);
    digitalWrite(in4,HIGH);
  digitalWrite(in3,LOW);
   analogWrite(ena,255);
   analogWrite(enb,255);
   delay(500);
  }
else
{
  digitalWrite(in1,HIGH);
   digitalWrite(in2,HIGH);
    digitalWrite(in4,HIGH);
  digitalWrite(in3,HIGH);
  analogWrite(ena,0);
   analogWrite(enb,0);
  delay(200);
}
}

void setup()
{
  // Debug console
  Serial.begin(9600);

  SerialBLE.begin(9600);
  Blynk.begin(SerialBLE, auth);

Serial.println("Waiting for connections...");
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(enb,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(ena,OUTPUT);
}

void loop()
{
  Blynk.run();
}

