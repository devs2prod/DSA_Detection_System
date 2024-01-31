//Alcohol Detector
const int MQ3=0;
//const int LED=9;
const int BUZZER= 10;
int value;

void setup() { //swetup function for alcohole
  Serial.begin(9600);
  pinMode(MQ3, INPUT);
  pinMode(BUZZER, OUTPUT);//if you want you can put buzzer in place led or both in the programme
  digitalWrite(BUZZER,LOW);

}

void loop()// loop for checking after every 500ms
{
  value= analogRead(MQ3);
  Serial.println(value);
  
  if(value>500)
  {
    digitalWrite(BUZZER,HIGH);
  }
  else
  {
    digitalWrite(BUZZER,LOW);
  }

  delay (500);
}
