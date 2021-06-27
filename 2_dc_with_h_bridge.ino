// C++ code
//
void setup()
{
  	// motor1
	//pinMode(6,OUTPUT); // enableA
  	pinMode(8,OUTPUT); // input 3
  	pinMode(9,OUTPUT); // input 4
  
  	// motor2
  	//pinMode(5,OUTPUT); // enableB
  	pinMode(11,OUTPUT); // input 1
  	pinMode(10,OUTPUT); // input 2
}

void loop()
{
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  //analogWrite(6,150);
  
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  //analogWrite(5,150);
}