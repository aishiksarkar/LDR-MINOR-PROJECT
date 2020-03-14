int redinput=2;
int greeninput=3;
int blueinput=4;
int value1=A0;
int red;
int blue;
int green;
int redvalue;
int bluevalue;
int greenvalue;
int redoutput=8;
int greenoutput=9;
int blueoutput=10;
void setup()
{
  pinMode(redinput,OUTPUT);
  pinMode(greeninput,OUTPUT);
  pinMode(blueinput,OUTPUT);
  pinMode(value1,INPUT);
  pinMode(redoutput,OUTPUT);
  pinMode(blueoutput,OUTPUT);
  pinMode(greenoutput,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(redinput,HIGH);
  delay(40);
  red=analogRead(value1);
  delay(10);
  Serial.print("R=");
  Serial.println(red);
  digitalWrite(redinput,LOW);
  digitalWrite(greeninput,HIGH);
  delay(40);
  green=analogRead(value1);
  delay(10);
  Serial.println("g=");
  digitalWrite(greeninput,LOW);
  digitalWrite(blueinput,HIGH);
  delay(40);
  blue=analogRead(value1);
  delay(10);
  Serial.println(blue);
  digitalWrite(blueinput,LOW);
  if((red>green)&&(red>blue))
  {
    redvalue=HIGH;
    Serial.print("red is intense");
  }
  else
    redvalue=LOW;
  if((green>red)&&(green>blue))
  {
    greenvalue=HIGH;
    Serial.print("green is intense");
  }
  else
    greenvalue=LOW;
  if((blue>red)&&(blue>green))
   {
    bluevalue=HIGH;
    Serial.print("blue is intense");
   }
  else
    bluevalue=LOW;
 digitalWrite(redoutput,redvalue);
 digitalWrite(blueoutput,bluevalue);
 digitalWrite(greenoutput,greenvalue);
   
}
