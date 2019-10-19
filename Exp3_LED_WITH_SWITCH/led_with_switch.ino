void setup() 
{

pinMode(13,INPUT);

pinMode(7,OUTPUT);

}

void loop() 
{

if(digitalRead(13)==HIGH)

{
  
digitalWrite(7,HIGH);
  
delay(100);
  
digitalWrite(7,LOW);
  
delay(100);

}

else

{
  
digitalWrite(7,LOW);

}

}