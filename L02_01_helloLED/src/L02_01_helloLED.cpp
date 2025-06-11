/* 
 * Project L01_01_HelloWorld

 * Author: IoT_Andres
 * Date: 6/10/2025
 * Description: Blink an LED
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

SYSTEM_MODE(SEMI_AUTOMATIC);

// Run the application and system concurrently in separate threads

SYSTEM_THREAD(ENABLED);


void setup(){
 pinMode(D1, OUTPUT);   // Put initialization like pinMode and begin functions here
}
// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  digitalWrite(D1, HIGH);
  delay(700);
  digitalWrite(D1, LOW);
  delay(700);
} 
