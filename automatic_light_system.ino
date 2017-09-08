int pirSensor=8;
int relayInput=7;

void setup()
{
  Serial.begin(9600);
  pinMode(pirSensor,INPUT);
  pinMode(relayInput,OUTPUT);
}
void loop(){
  int sensorValue=digitalRead(pirSensor);
  
  if(sensorValue==1)
  {
    digitalWrite(relayInput,HIGH);
    Serial.println("Light ON");
    delay(2000); 
  }
  else
  {
  digitalWrite(relayInput,LOW);
    Serial.println("Light OFF  ");
    delay(2000); 
  }
}

