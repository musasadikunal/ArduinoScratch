void setup() {
  
  pinMode(A0, INPUT); // A0 pinini çıkış olarak ayarlanıyor.
  pinMode(13,OUTPUT); // 13.pin LED çıkışı olarak ayarlanıyor.

}

void loop() {

  int x = analogRead(A0); // Okunan sensör değeri X tam sayısına eşitleniyor.
  
  if (x> 500){ // Eğer x 500 değerinden küçük ise 13. pin açık hale getiriliyor.
      
  digitalWrite(13,HIGH);
  }
  
  else { // Diğer durumlarda ise 13. kapalı hale getiriliyor.
    
  digitalWrite(13,LOW);
  }
  
}
