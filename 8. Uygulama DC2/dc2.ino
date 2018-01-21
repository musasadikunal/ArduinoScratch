/*
   Serial ekran komutları
   Motorun sağa dönmesi için = a
   Motorun sola dönemsi için = b 
   Motorları durdurmak için = c 
*/

#define sag_motor 13 //Motorun sağ bacağı
#define sol_motor 12 //Motorun sol bacağı
char gelen; //Gelen veriler depolanıyor

void setup() {
    
    pinMode(sag_motor,OUTPUT); //Motorlar çıkış olarak ayarlanıyor.
    pinMode(sol_motor,OUTPUT); //Motorlar çıkış olarak ayarlanıyor.
    Serial.begin(9600); //Serial iletişim başlatılıyor.  

}

void loop() {
  
  gelen = Serial.read(); //Serialden okunan değer gelene eşitleniyor.
  
  if (gelen == 'a') // Sağ motor çalıştırlıyor. 
    {
    digitalWrite(sag_motor,HIGH);
    digitalWrite(sol_motor,LOW);
    Serial.println("Sag motor calistirildi");
    }
  
  if (gelen == 'b') // Sol motor çalıştırlıyor.
    {
    digitalWrite(sag_motor,LOW);
    digitalWrite(sol_motor,HIGH);    
    Serial.println("Sol motor calistirldi");
    }
    
  if (gelen == 'c') // Motorlar durduruluyor.
    {
    digitalWrite(sag_motor,LOW);
    digitalWrite(sol_motor,LOW);    
    Serial.println("Motorlar durduruldu");
    }

}
