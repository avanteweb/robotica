#include <DHT.h>

#define DHTPIN A1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
Serial.begin(9600);
dht.begin();
}

void loop() {

  if (Serial.available()){
    int temp = dht.readTemperature();
    int umid = dht.readHumidity();
    char recebido;
    
      recebido = Serial.read();
        if(recebido == 't'){
          Serial.print("Temperatura ");
          Serial.print(temp);
          Serial.print(" C°    ");
          Serial.print("Umidade ");
          Serial.print(umid);
          Serial.println(" %");
          delay(2000);
      }
    }
}


