const int led= 13;  // artık 13. pin yazmak yerine led yazacağız
const int buton=2; // artık 2. pin yazmak yerine buton yazacağız
int butonDurum=0; // butonumuzun değerini almak için bir ifade tanımlıyoruz 
void setup(){
  
  pinMode(led,OUTPUT);   //ledimizi çıkıs ayarladık
  pinMode(buton,INPUT); //butonumuz giriş ayarladık
 
}
void loop(){
  
  butonDurum=digitalRead(buton); //butonun durumunu okuyoruz
  if(butonDurum==HIGH){
    // Eğer buton durumu High yani butona basılırsa ışığı yakıyoruz
    digitalWrite(led,HIGH);
  }
  else{
    // basılmadığı zaman led yanmayacak
    digitalWrite(led,LOW);
  }
}
