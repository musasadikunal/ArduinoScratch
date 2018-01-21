#define LM35 A0 // Sensor A0 olarak ayarlandı.
#define buzzer 11 // Buzzer 11. pin olarak ayarlandı.
#define led 12 // LED 12. pin olarak ayarlandı.

int sensor; //Okunan değerleri depolamak için değişkenler.
float sicaklik;
int milivoltaj;

void setup() {
  pinMode(buzzer,OUTPUT); // Buzzzer çıkış olarak ayarlandı.
  pinMode(led,OUTPUT); // LED çıkış olarak ayarlandı.
  pinMode(LM35,INPUT); // LM35 giriş olarak ayarlandı.  
}

void loop() {
  sensor = analogRead(LM35); // Sensorden okunan değer sensor değişkenine eşilendi
  milivoltaj= (sensor/1023.0)*5000; // Milivoltaj dönüştürme
  sicaklik = milivoltaj /10.0; // Celsius dönüştüme     

  if (sicaklik < 25) // 25 dereceden küçük olduğu zaman
  {
    digitalWrite(led,HIGH);
    digitalWrite(buzzer,LOW);    
  }
  else { // 25 dereceden büyük olduğu zaman 
    digitalWrite(led,LOW);
    digitalWrite(buzzer,HIGH);
    }
}
