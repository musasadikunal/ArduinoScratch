#define trigpin 10 //Trigpini 10. çıkış olarak ayarlandı.
#define echopin A5 //Echopini A5 giriş olarak ayarlandı.
#define led1 11 //1.LED 11. çıkış olarak ayarlandı.
#define led2 12 //2.LED 12. çıkış olarak ayarlandı.
#define buzzer 13 //Buzzer 13. çıkış olarak ayarlandı.

void setup() {
  pinMode(trigpin,OUTPUT); // Çıkış ve girişler
  pinMode(echopin,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  digitalWrite(trigpin,HIGH); //Trigpininden ses gönderildi
  delayMicroseconds(1000);
  digitalWrite(trigpin,LOW);
  int sure = pulseIn(echopin,HIGH); //Kronometre sure tuttu
  int mesafe = (sure/2)/ 29.1; // Ses iki kere gidip geldiğininden ikiye bölündü ve 29.1 çarpıldı

  if (mesafe > 30) { // Eğer mesafe 30cm'den büyük olursa 1.LED yakıldı
    
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(buzzer,LOW);
  }
  if ( 30 > mesafe && mesafe > 15){ //Eğer mesafe 30'dan küçük 15'den büyük ise 2.LED yakıldı
    
    digitalWrite(led2,HIGH);
    digitalWrite(led1,LOW);
    digitalWrite(buzzer,LOW);
    
    }
  if (mesafe < 15){ // Eğer mesafe 15cm'den küçük olursa buzzer çalıştırıldı.
    digitalWrite(buzzer,HIGH);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    
    
    }
    
    }
