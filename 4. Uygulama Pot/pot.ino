void setup(){

  pinMode(A0,INPUT); // A0 giriş olarak belirleniyor
  pinMode(5,OUTPUT); // 5. pin çıkış olarak belirleniyor.

}

void loop(){

  int Deger=analogRead(A0); // A0'dan okunan değerler Degere eşitleniyor.
  Deger=map(Deger, 0, 1023, 0, 255); // Map fonksiyonu sayesinde değerler 0-255 arasına düşürülüyor.
  analogWrite(5, Deger); // 5.pine değişen bu değerimiz veriliyor.

}
