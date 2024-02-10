int led1 =3;
int led2 =5;
int led3 =6;
int led4 =9;
int led5 =10;
int led6 =11;
int switch1=2;
int switch2=8;

void setup(){
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(switch1,INPUT);
pinMode(switch2,INPUT);

  
}
void loop(){
if (digitalRead(switch1)==1){
 analogWrite(led1,128);
 analogWrite(led2,255);
}
else  {
 analogWrite(led1,0);
 analogWrite(led2,0);
}
 if (digitalRead(switch2)==1){
 analogWrite(led4,255);
 analogWrite(led6,128);
}
else  {
 analogWrite(led4,0);
 analogWrite(led6,0);
}
}