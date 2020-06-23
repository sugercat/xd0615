int pinInterrupt = 2; //接中断信号的脚
 
void onChange()
{
   if ( digitalRead(pinInterrupt) == LOW )
      Serial.println("Key Down");
   else
      Serial.println("Key UP");
}
void setup()
{
  Serial.begin(9600);
  pinMode(pinInterrupt, INPUT);
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
}
void loop()
{   int i=0;
    byte income;
    for(i;i<10;i++){
    income=i;
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(1000);
    if(i==9){i=0;}
    if( digitalRead(pinInterrupt) == LOW ){i=0;}
}
}
