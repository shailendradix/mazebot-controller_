#include <BluetoothSerial.h>
#include <analogWrite.h>
#define LED_BUILTIN 2
#define d11 5
#define p1 4
#define d12 15
#define d21 18
#define p2 19
#define d22 21

BluetoothSerial rx;
char t;
void setup()
{
  //put your setup code here,to run code once:
 Serial.begin(115200);
 rx.begin();
 delay(1000);
 pinMode(d11,OUTPUT);
 pinMode(p1,OUTPUT);
 pinMode(d12,OUTPUT);
 pinMode(d21,OUTPUT);
 pinMode(p2,OUTPUT);
 pinMode(d22,OUTPUT);
}
//Go forward

void f(){
  digitalWrite(d11,HIGH);digitalWrite(d12,LOW);analogWrite(p1,180);
  digitalWrite(d21,HIGH);digitalWrite(d22,LOW);analogWrite(p2,180);
}
// Go backward
void b(){
  digitalWrite(d11,LOW);digitalWrite(d12,HIGH);analogWrite(p1,180);
  digitalWrite(d21,LOW);digitalWrite(d22,HIGH);analogWrite(p2,180);
}

void r(){
  digitalWrite(d11,HIGH);digitalWrite(d12,LOW);analogWrite(p1,180);
  digitalWrite(d21,LOW);digitalWrite(d22,LOW);analogWrite(p2,0);
}

void l(){
  digitalWrite(d11,LOW);digitalWrite(d12,LOW);analogWrite(p1,0);
  digitalWrite(d21,HIGH);digitalWrite(d22,LOW);analogWrite(p2,180);
}

void s(){
  analogWrite(p1,0);
  analogWrite(p2,0);
}


void loop()
{
//put your main code here ,to run repeatedly:
if (rx.available())
{
  t=rx.read();
  Serial.println(t);
}

if (t=="F"){
  f();
}
else if (t=="B"){
  b();
}
else if (t=="L"){
  l();
}
else if (t=="R"){
  r();
}
else if (t=="S"){
  s();
}
}
