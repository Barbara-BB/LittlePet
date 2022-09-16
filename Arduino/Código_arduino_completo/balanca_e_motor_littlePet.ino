#include <HX711.h>


#define velmotor 6
#define mla 4
#define mlb 5
#define tmp 3000

int vel=0;
float medidaant=0

// INCLUSÃO DE BIBLIOTECAS


// DEFINIÇÕES DE PINOS
#define pinDT  2
#define pinSCK  3


// INSTANCIANDO OBJETOS
HX711 scale;

// DECLARAÇÃO DE VARIÁVEIS
float medida = 0;

void setup() {
  pinMode(velmotor,OUTPUT);
  pinMode(mla,OUTPUT);
  pinMode(mlb,OUTPUT);
  digitalWrite(mla,LOW);
  digitalWrite(mlb,LOW);
  analogWrite(velmotor,vel);
  vel=250;
  analogWrite(velmotor,vel);
  digitalWrite(mla,LOW);
  digitalWrite(mlb,HIGH);
  delay(tmp);
  digitalWrite(mla,LOW);
  digitalWrite(mlb,LOW);
  delay(100);
  Serial.begin(57600);
  scale.begin(pinDT, pinSCK); // CONFIGURANDO OS PINOS DA BALANÇA
  scale.set_scale(-84282); // LIMPANDO O VALOR DA ESCALA
  delay(2000);
  scale.tare(); // ZERANDO A BALANÇA PARA DESCONSIDERAR A MASSA DA ESTRUTURA
  Serial.println("Balança Zerada");
  medida = scale.get_units(10); // SALVANDO NA VARIAVEL O VALOR DA MÉDIA DE 5 MEDIDAS
  Serial.println(medida, 3); // ENVIANDO PARA MONITOR SERIAL A MEDIDA COM 3 CASAS DECIMAIS
  scale.power_down(); // DESLIGANDO O SENSOR
  if medida!=medidaant:
  digitalWrite(mla,HIGH);
  digitalWrite(mlb,LOW);
  delay(tmp);
}

void loop() {}
