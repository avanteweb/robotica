#include <Thermistor.h>

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

int SENSOR_LUZ = 0;
int VALOR_SENSOR_LUZ = 0;
int SENSOR_TEMP = 1;
int VALOR_SENSOR_TEMP = 1;

void setup(){
  lcd.begin (16, 2);
  Serial.begin(9600);
}

void loop () {
  
lcd.setCursor(3,0);
lcd.print("Oi Pessoal");
lcd.setCursor(3,1);
lcd.print("Tudo Bem ?");

delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(0,0);
lcd.print("Espero Que Sim !");

delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(3,0);
lcd.print("Eu Sou o");
lcd.setCursor(4,1);
lcd.print("Scrat");
delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(2,0);
lcd.print("Estou Feliz");
lcd.setCursor(4,1);
lcd.print("Em estar ");
delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(0,0);
lcd.print("Conhecendo voces");
delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(4,0);
lcd.print("Eu Fui");
lcd.setCursor(0,1);
lcd.print("Desenvolvido por");
delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(0,0);
lcd.print("@jeehmilena");
lcd.setCursor(0,1);
lcd.print("@juniorlima");
delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(0,0);
lcd.print("Vou mostrar");
lcd.setCursor(0,1);
lcd.print("Alguns dados");
delay(3000);

lcd.clear();

delay(1000);

lcd.setCursor(0,0);
lcd.print("Captados pelos");
lcd.setCursor(0,1);
lcd.print("Meus sensores");
delay(3000);

lcd.clear();

delay(1000);

VALOR_SENSOR_LUZ = analogRead(SENSOR_LUZ); 


lcd.setCursor(0,0);
lcd.print("Luminosidade ");
lcd.setCursor(13,0);
lcd.print(VALOR_SENSOR_LUZ);


delay(5000);
lcd.clear();
delay(1000);

VALOR_SENSOR_TEMP = analogRead(SENSOR_TEMP); 

lcd.setCursor(0,0);
lcd.print("Temperatura ");
lcd.setCursor(13,0);
lcd.print(VALOR_SENSOR_TEMP);


delay(5000);
lcd.clear();
delay(1000);
}

