int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

int trigPin = 10;
int echoPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}


void display1(void)
{

digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
}
//display number2
void
display2(void)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);

digitalWrite(g,HIGH);
digitalWrite(e,HIGH);
digitalWrite(d,HIGH);
}

// display number3
void display3(void)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(g,HIGH);
}
// display number4
void display4(void)
{

digitalWrite(f,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);

}
// display number5
void display5(void)

{
digitalWrite(a,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
}
// display number6
void
display6(void)
{
digitalWrite(a,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
}
// display number7
void display7(void)

{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
}

// display number8
void display8(void)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);

}
void clearDisplay(void)
{
digitalWrite(a,LOW);
digitalWrite(b,LOW);

digitalWrite(g,LOW);
digitalWrite(c,LOW);
digitalWrite(d,LOW);

digitalWrite(e,LOW);
digitalWrite(f,LOW);
}
void display9(void)

{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(g,HIGH);

digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,HIGH);

}
void display0(void)
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);

digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);

digitalWrite(f,HIGH);
}

void loop()
{
    long duration;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin,LOW);


  duration = pulseIn(echoPin,HIGH);

  int cm = (int)MicroSecondsToCM(duration);
  Serial.println("CM:");
  Serial.println(cm);
  switch(cm)
  {
    
    case 1:
      clearDisplay();
      display1();
      delay(30);
      break;
    case 2:
    clearDisplay();
      display2();
      delay(30);
      break;
    case 3:
    clearDisplay();
      display3();
      delay(30);
      break;
    case 4:
    clearDisplay();
      display4();
      delay(30);
      break;
    case 5:
    clearDisplay();
      display5();
      delay(30);
      break;
    case 6:
    clearDisplay();
      display6();
      delay(30);
      break;
    case 7:
    clearDisplay();
      display7();
      delay(30);
      break;
    case 8:
    clearDisplay();
      display8();
      delay(30);
      break;
    case 9:
    clearDisplay();
      display9();
      delay(30);
      break;
    case 0:
      clearDisplay();
      display0();
      delay(30);
      break;
    default:
      clearDisplay();
      break;
  }
}
long MicroSecondsToCM(long microSeconds)
{
  return microSeconds / 29 / 2;
}