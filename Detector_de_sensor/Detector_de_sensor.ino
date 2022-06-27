
// Librería

#include <OneWire.h>

//Constantes
int t = 2000;

//Pines
OneWire ourWire(A0);



void setup(void) {
Serial.begin(9600);

}

void loop(void) {

byte addr[8];
Serial.println("Obteniendo direcciones: ");
while(ourWire.search(addr))
{
  Serial.print("Address = ");
  for( int i = 0; i <8; i++){
    Serial.print(" 0x");
    Serial.print(addr[i], HEX);
  }
  Serial.println();
}

Serial.println();
ourWire.reset_search();
delay(t);
 
}
