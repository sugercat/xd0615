int i=0;
void setup()
{
  for(i=0;i<11;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=1;i<11;i=i+3)
  {
    if(i=1){
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
       digitalWrite(i+1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
       digitalWrite(i+2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i+2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
      digitalWrite(i+1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
      digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
    }
      if(i=4){
  digitalWrite(i, HIGH);
  delay(300); // Wait for 300 millisecond(s)
         digitalWrite(i+1, HIGH);
  delay(300); // Wait for 300 millisecond(s)
         digitalWrite(i+2, HIGH);
  delay(300); // Wait for 300 millisecond(s)
  digitalWrite(i+2, LOW);
  delay(300); // Wait for 300 millisecond(s)  
  digitalWrite(i+1, LOW);
  delay(300); // Wait for 300 millisecond(s)  
         digitalWrite(i, LOW);
  delay(300); // Wait for 300 millisecond(s)  

  }
      if(i=7){
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
         digitalWrite(i+1, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
         digitalWrite(i+2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i+2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
        digitalWrite(i+1, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
        digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)  
  }
     if(i=10){
  digitalWrite(0, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(0, LOW);
  delay(500); // Wait for 500 millisecond(s)  
  }
  }
}