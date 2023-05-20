// C++ code
//
int potpin=2;
int values=0;
void setup()
{
  for(int i=1;i<=10;i++){
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  values=analogRead(potpin);
  int value=values/10;
  for(int j=1;j<=10;j++){
    digitalWrite(j,HIGH);
    delay(value);
    digitalWrite(j+1,HIGH);
    delay(value);
    digitalWrite(j,LOW);
  }
  for(int k=10;k>=1;k--){
    digitalWrite(k,HIGH);
    delay(value);
    digitalWrite(k-1,HIGH);
    delay(value);
    digitalWrite(k,LOW);
  }
    
}