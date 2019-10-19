void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float d,t;
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);
  t=pulseIn(9,HIGH);
  d=0.017*t;
  Serial.print("Distance");
  Serial.print(d);
  if(d<20)
  {
    for(int i=0;i<256;i++)
    {
      analogWrite(6,i);
      delay(10);
    }
   }
  else if(d>20)
  {
    analogWrite(6,0);
  }
}