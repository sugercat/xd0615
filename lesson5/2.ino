void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);



  Serial.begin(9600);
}
byte income=0;
int a,c;
void loop()
{
  if(Serial.available()>0)
  {
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    for(int i=0;i<4;i++){ 
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(11-i, LOW);
    income=Serial.read();
    a=income;
    c=(a/(i*10))%10;
    income=c-'0';
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    delay(10);}
  }
}
