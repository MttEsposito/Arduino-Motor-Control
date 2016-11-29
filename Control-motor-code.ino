/*
This is a simple project with the Arduino Motor Shield.  
This code turns the Motor on and adjusts the speed according the position of the potentiometer 

The wiper of the potentiometer gets attached to pin A2 on the Arduino. 

*/


void setup() {  
  pinMode(12,OUTPUT); //Channel A Direction Pin Initialize
  pinMode(7,OUTPUT);  // LED output 1
  pinMode(6,OUTPUT);  // LED output 2
}

void loop() {
  
  if (analogRead(A2) > 512)
  {
    digitalWrite(12, HIGH); //Channel A Direction Forward
    analogWrite(3, 0.5*analogRead(A2)-255);  //Channel A Speed
    digitalWrite(7,HIGH);// turn led1 on
    digitalWrite(6,LOW);//turn led2 off 
  }
  
  if(analogRead(A2) < 512) 
  {
    digitalWrite(12, LOW); //Channel A Direction Reverse
    analogWrite(3, 255-0.5*analogRead(A2));  //Channel B Speed
    digitalWrite(6,HIGH);//turn led2 on
    digitalWrite(7,LOW);//turn led1 off  
  }
     
}
