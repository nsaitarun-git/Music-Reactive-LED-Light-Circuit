int soundPin=A5;
int soundVal;
int led1=11;
int led2=10;
int led3=9;
int led4=8;
int led5=7;
int led6=6;


void setup() {
 Serial.begin(9600);
 pinMode(soundPin,INPUT);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
 pinMode(led5,OUTPUT);
 pinMode(led6,OUTPUT);
 

}

void loop() {
  soundVal=analogRead(soundPin);
  Serial.println(soundVal);

  if(soundVal<=530){
    digitalWrite(led1,HIGH);
  }else{
    digitalWrite(led1,LOW);
  }
  
  if(soundVal<=525){
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led2,LOW);
  }
  
  if(soundVal<=520){
    digitalWrite(led3,HIGH);
    }else{
    digitalWrite(led3,LOW);
  }
  
  if(soundVal<=515){
    digitalWrite(led4,HIGH);
      }else{
    digitalWrite(led4,LOW);
  }
  
  if(soundVal<=510){
    digitalWrite(led5,HIGH);
  }else{
    digitalWrite(led5,LOW);
  }
  
  if(soundVal<=505){
    digitalWrite(led6,HIGH);
  }else{
    digitalWrite(led6,LOW);
  }

  delay(50);
      
}
