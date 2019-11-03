void setup()
{
  Serial.begin(9600);
  pinMode(11, INPUT);
  pinMode(5,OUTPUT);
}

void loop()
{
  
  digitalWrite(5,LOW);
  delayMicroseconds(2); 
  digitalWrite(11, HIGH);
  delayMicroseconds(10); 
  digitalWrite(5, LOW);
  long time= pulseIn(11, HIGH);
  int distance= 0.017*time;
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println("cm");
}
