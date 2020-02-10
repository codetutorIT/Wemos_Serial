#include <Arduino.h>

void setup() {
   Serial.begin(115200);
   Serial.println("Serielle Schnittstelle initialisiert!");
}
void loop() {
   if(Serial.available() > 0) {
       Serial.print("Empfangen: ");
       Serial.println((char) Serial.read());
   }
} 