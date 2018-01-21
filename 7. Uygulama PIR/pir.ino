#define pir 2
#define led 13             
int deger;
 
void setup() {
  pinMode(pir, INPUT); // PIR giriş yapıldı.
  pinMode(led, OUTPUT); // LED çıkış yapıldı.  
}
 
void loop(){
  deger = digitalRead(pir);  // Dijital değer okuması          
  
  if (deger == 1) {            
    digitalWrite(led, HIGH); // Okunan değer 1 olunca led yakılıyor 
  }
  else{
    digitalWrite(led,LOW); // Okunan değer 1 olmazsa led söndürülüyor.
  }
}

