//**********************************************************************
//          WELCOME THANK YOU FOR DOWNLOAD THE CODE                    *
//          MADE BY MATTIA ESPOSITO                                    *
//          https://github.com/MttEsposito                             *
//          https://www.youtube.com/channel/UCPTNOyJNd_I3DN77ojzRrug   *
//          HAVE A NICE CODING                                         *
//**********************************************************************

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
