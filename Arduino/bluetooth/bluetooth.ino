char Incoming_value=0;

void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);}

void loop() {
if(Serial.available()>0)// se a porta conectada, no caso bluetooh contiver informações
{Incoming_value=Serial.read();//variavel receberá informações da porta
Serial.print(Incoming_value);
Serial.print("\n");
if(Incoming_value=='1')//se a informação for 1 (on) acende led ou o que estiver na porta 13
  digitalWrite(13,HIGH);
else if(Incoming_value =='0') //se não apaga
  digitalWrite(13,LOW);}
  

}
