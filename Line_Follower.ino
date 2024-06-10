#define LMS  6
#define LS   5
#define CS   4
#define RS   3
#define RMS  2
#define enA  A1
#define enB  A6
#define MotorAip1  A2
#define MotorAip2  A3
#define MotorBip1  A4
#define MotorBip2  A5

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(LMS, INPUT);
  pinMode(LS,  INPUT);
  pinMode(CS,  INPUT);
  pinMode(RS,  INPUT);
  pinMode(RMS, INPUT);
  pinMode(MotorAip1, OUTPUT);
  pinMode(MotorAip2, OUTPUT);
  pinMode(MotorBip1, OUTPUT);
  pinMode(MotorBip2, OUTPUT);
  analogWrite(enA, 170);
  analogWrite(enB, 170);
}

void loop()
{
  if (digitalRead(LMS) == 0 && digitalRead(LS) == 0 && digitalRead(CS) == 1 && digitalRead(RS) == 0 && digitalRead(RMS) == 0)
    forward();
  else if (digitalRead(LMS) == 0 && digitalRead(LS) == 1 && digitalRead(CS) == 1 && digitalRead(RS) == 1 && digitalRead(RMS) == 0)
    forward();
  else if (digitalRead(LMS) == 0 && digitalRead(LS) == 1 && digitalRead(CS) == 0 && digitalRead(RS) == 0 && digitalRead(RMS) == 0)
    left();
  else if (digitalRead(LMS) == 1 && digitalRead(LS) == 0 && digitalRead(CS) == 0 && digitalRead(RS) == 0 && digitalRead(RMS) == 0)
    left();
  else if (digitalRead(LMS) == 1 && digitalRead(LS) == 1 && digitalRead(CS) == 0 && digitalRead(RS) == 0 && digitalRead(RMS) == 0)
    left();
  else if (digitalRead(LMS) == 0 && digitalRead(LS) == 1 && digitalRead(CS) == 1 && digitalRead(RS) == 0 && digitalRead(RMS) == 0)
    left();
  else if (digitalRead(LMS) == 1 && digitalRead(LS) == 1 && digitalRead(CS) == 1 && digitalRead(RS) == 0 && digitalRead(RMS) == 0)
    left();
  else if (digitalRead(LMS) == 1 && digitalRead(LS) == 1 && digitalRead(CS) == 0 && digitalRead(RS) == 0 && digitalRead(RMS) == 1)
    right();
  else if (digitalRead(LMS) == 1 && digitalRead(LS) == 1 && digitalRead(CS) == 0 && digitalRead(RS) == 0 && digitalRead(RMS) == 0)
    right();
  else if (digitalRead(LMS) == 1 && digitalRead(LS) == 1 && digitalRead(CS) == 1 && digitalRead(RS) == 1 && digitalRead(RMS) == 0)
    right();
  else if (digitalRead(LMS) == 0 && digitalRead(LS) == 0 && digitalRead(CS) == 1 && digitalRead(RS) == 1 && digitalRead(RMS) == 0)
    right();
  else if (digitalRead(LMS) == 0 && digitalRead(LS) == 0 && digitalRead(CS) == 1 && digitalRead(RS) == 1 && digitalRead(RMS) == 1)
    right();
  else
    stop();
}

void forward()
{

  digitalWrite(MotorAip1, HIGH);
  digitalWrite(MotorAip2, LOW);
  digitalWrite(MotorBip1, LOW);
  digitalWrite(MotorBip2, HIGH);
}

void left()
{
  digitalWrite(MotorAip1, HIGH);
  digitalWrite(MotorAip2, LOW);
  digitalWrite(MotorBip1, LOW);
  digitalWrite(MotorBip2, LOW);
}

void right()
{


  digitalWrite(MotorAip1, LOW);
  digitalWrite(MotorAip2, LOW);
  digitalWrite(MotorBip1, LOW);
  digitalWrite(MotorBip2, HIGH);
}

void reverse()
{
  digitalWrite(MotorAip1, LOW);
  digitalWrite(MotorAip2, HIGH);
  digitalWrite(MotorBip1, HIGH);
  digitalWrite(MotorBip2, LOW);
}

void stop()
{
  digitalWrite(MotorAip1, LOW);
  digitalWrite(MotorAip2, LOW);
  digitalWrite(MotorBip1, LOW);
  digitalWrite(MotorBip2, LOW);
 // digitalWrite(MotorBip2, LOW);  
}
