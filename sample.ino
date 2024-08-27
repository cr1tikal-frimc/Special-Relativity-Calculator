#include <AHT20.h>
#include <Wire.h>

AHT20 aht20;

#define samp 2000
float humidity = 0.0;
float temp = 0.0;

void setup() {
  Serial.begin(9600);

  if(!aht20.begin()){
    Serial.println("AHT20 sensor not connected");

    while(True);
  }
  
  Serial.println("AHT20 acknowledged...");

}

void loop() {
  if(aht20.available()== true){
    temp = aht20.getTemperature();
    humidity = aht20.getHumidity();

    Serial.println("Temperature: "+ String(temp));
    Serial.println("Humidity: " + String(humidity));
  }

  delay(samp);
  

}