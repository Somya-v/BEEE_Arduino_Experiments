void setup() {
 pinMode(0,INPUT);
pinMode(13,OUTPUT);
 

}

void loop() 
{
 int reading = digitalRead(11);
if(reading==HIGH)
{
  digitalWrite(13,HIGH)
}
else{
  digitalWrite(13,LOW);


}}
