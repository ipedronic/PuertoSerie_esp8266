//www.elbrujitocanaio.es 
//Todo el código esta bajo licencia de la Creative Commons.
#include <SoftwareSerial.h>
char dato_puerto;

SoftwareSerial ESP(3, 2); // RX | TX

void setup()
  {  Serial.begin(57600);
     ESP.begin(57600);
    Serial.println("Resetear el ESP8266,un pulso patilla reset a negativo");
    Serial.println("Programar cuando aparece la palabra: ready"); 
  }

void loop()  { 
  
              
     if (ESP.available()){
           dato_puerto = ESP.read() ;          
           Serial.print(dato_puerto);
          }
          
     if (Serial.available()) {         
          dato_puerto = Serial.read();
          ESP.print(dato_puerto);
         }
   }
