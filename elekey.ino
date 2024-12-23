// 本当のファイル名は "LedTickOnAttiny13a.ino"
// マイコンは ATtiny13a を使用
// ハードウェアパッケージは MicroCore を使用
// 設定は底部に書きます
void setup() {
  pinMode(PIN5, OUTPUT);         //５番ピンを出力に設定
  pinMode(PIN1,INPUT_PULLUP);//1番ピンを長点に設定

}

void loop() {   
  int longp;
  longp = digitalRead(PIN1);

  if( longp == LOW ){               //長点の処理  
digitalWrite(PIN5,HIGH);
delay(500);
digitalWrite(PIN5,LOW);
delay(500);
}else{digitalWrite(PIN5,LOW);
}




}






