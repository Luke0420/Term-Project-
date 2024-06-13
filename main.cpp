#include <Arduino.h>
#include <WiFi.h>
#include<WiFiClient.h>
#include<WiFiAP.h>
#include<Keypad.h>

*/
/* 4 digit LED
const int A = 5;
const int B = 18;
const int C = 19;
const int D = 21;
const int E = 22;
const int F = 23;
const int G = 4;
const int C1 = 27;
const int C2 = 14; 
const int C3 = 12;
const int C4 = 13;
const int DP = 35;

void setup()
{
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    pinMode(E, OUTPUT);
    pinMode(F, OUTPUT);
    pinMode(G, OUTPUT);

    pinMode(C1, OUTPUT);
    pinMode(C2, OUTPUT);
    pinMode(C3, OUTPUT);
    pinMode(C4, OUTPUT);

    pinMode(DP, OUTPUT);

}

void loop()
{

  //2

  digitalWrite(C1, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(G, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);

  digitalWrite(C2, HIGH);
  digitalWrite(C3, HIGH);
  digitalWrite(C4, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(F, HIGH);

  digitalWrite(DP, HIGH);

}

*/

const int A = 13;
const int B = 14;
const int C = 32;
const int D = 33;
const int E = 25;
const int F = 26;
const int G = 27;



void setup()
{



  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  

}

void loop()
{

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);

  digitalWrite(F, LOW);
  digitalWrite(C, LOW);


}