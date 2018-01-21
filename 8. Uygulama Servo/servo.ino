#include <Servo.h> //Servo kütüphanesi programa ekliyoruz.
Servo s_motor; //s_motor isminde servomuzu tanıtıyoruz.

void setup() 
{
  s_motor.attach(8); // Motorumuzu 8'e taktığımızı söylüyoruz. 
}

void loop() {
  s_motor.write(180); //180 dereceye motorumuz götürüyoruz.
  delay(2000); //2 saniye bekliyoruz. 
  s_motor.write(0); //0 dereceye motorumuzu götürüyoruz. 
  delay(2000); //2 saniye bekliyoruz.
}
