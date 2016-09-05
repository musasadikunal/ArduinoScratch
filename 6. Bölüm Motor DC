#define sag_motor 13 // Sağ motor 13.pin
#define sol_motor 12 // Sol motor 12.pin

void setup(){
  
  pinMode(sag_motor,OUTPUT); //Motorlar çıkış olarak ayarlandı.
  pinMode(sol_motor,OUTPUT); //Motorlar çıkış olarak ayarlandı.

}

void loop(){
  
  digitalWrite(sag_motor,HIGH);//Sağ motor çalıştırıldı.
  digitalWrite(sol_motor,LOW); //Sol motor kapatıldı.
  delay (10000); // 10 saniye bekleniyor

  digitalWrite(sag_motor,LOW); //Sağ motor kapatıldı. 
  digitalWrite(sol_motor,HIGH); //Sol motor çalıştırıldı.
  delay(10000); //10 saniye bekleniyor
  
  digitalWrite(sag_motor,LOW); //Sağ motor kapatıldı.
  digitalWrite(sol_motor,LOW); //Sol motor kapatıldı. 
  delay(2000); //2 saniye bekleniyor
  
  }
