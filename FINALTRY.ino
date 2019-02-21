int mf1=3;
int mb1=10;
int mf2=4;
int mb2=11;
//int LED=13;
//int LEDS=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  //pinMode(LEDS,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(LEDS,LOW);
  //digitalWrite(13,LOW);
  digitalWrite(mf1,LOW);
  digitalWrite(mb1,LOW);  
  digitalWrite(mf2,LOW);
  digitalWrite(mb2,LOW); 
  
  if(Serial.available()>0){
    Stop();
    char data=Serial.read();
    switch(data){
        case 'F':
                forward();
                delay(20);
                break;
        case 'B':
                backward();
                delay(20);
                break;
        case 'L':
                left();
                delay(20);
                break;
        case 'R':
                 right();
                 delay(20);
                 break;
        case 'S':
                 Stop();
                 delay(5);
                 break;         

                         
      }
      Serial.println(data);
    }
    delay(5);
}

void forward(){
  digitalWrite(mf1,HIGH);
  digitalWrite(mb1,LOW);  
  digitalWrite(mf2,HIGH);
  digitalWrite(mb2,LOW);  
}

void backward(){
  digitalWrite(mf1,LOW);
  digitalWrite(mb1,HIGH);  
  digitalWrite(mf2,LOW);
  digitalWrite(mb2,HIGH);
  //digitalWrite(LEDS,LOW);
  //digitalWrite(13,LOW);  
}
void right(){
  digitalWrite(mf1,HIGH);
  digitalWrite(mb1,LOW);  
  digitalWrite(mf2,LOW);
  digitalWrite(mb2,LOW);  
}
void left(){
  digitalWrite(mf1,LOW);
  digitalWrite(mb1,HIGH);  
  digitalWrite(mf2,HIGH);
  digitalWrite(mb2,LOW);  
}
void Stop(){
  digitalWrite(mf1,LOW);
  digitalWrite(mb1,LOW);  
  digitalWrite(mf2,LOW);
  digitalWrite(mb2,LOW);  
  //digitalWrite(LEDS,LOW);
  //digitalWrite(13,LOW);
}

