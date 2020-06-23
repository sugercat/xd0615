/*
  Pitch follower

  Plays a pitch that changes based on a changing
  analog input

  circuit:
  * 8-ohm speaker on digital pin 9
  * photoresistor on analog 0 to 5V
  * 4.7K resistor on analog 0 to ground

  created 21 Jan 2010
  modified 31 May 2012  by Tom Igoe, with
  suggestion from Michael Flynn

  This example code is in the public domain.
  http://www.arduino.cc/en/Tutorial/Tone2
  中文翻译：
    音调跟随器
    会播放根据不断变化的模拟输入（指光敏电阻接受到的光强变化改变阻值）而改变播放的音高
    电路：*数字管脚9上的8欧姆扬声器
         *模拟0至5V光刻胶 
         *模拟0对地上的4.7K电阻
    2010年1月21日创建
    由Tom Igoe于2012年5月31日修订
    迈克尔·弗林的建议
    此示例代码位于公共域中。
    http://www.arduino.cc/en/Tutorial/Tone2
*/

int sensorReading = 0;//设置一个变量

void setup()
{
  pinMode(A0, INPUT);//设置A0口为信号输入端
  Serial.begin(9600);//连接板子输入信息和电脑

  pinMode(9, OUTPUT);//设置9号口为输出口
}

void loop()
{
  // read the sensor（读取传感器信息）
  sensorReading = analogRead(A0);
  // print the sensor reading so you know its range
  //(传输传感器读数，以便让板子知道其变化范围)
  Serial.println(sensorReading);
  // map the sensor reading to a range for the
  // speaker
  //（将传感器的信号传给音响）
  tone(9, 440 * pow(2.0, (constrain(int(map(sensorReading, 0, 1023, 36, 84)), 35, 127) - 57) / 12.0), 1000);
  //通过此函数进行运算设计控制输入音响的电流大小来控制其音调的改变幅度
  delay(10); // Delay a little bit to improve simulation performance（设置延迟）
}
