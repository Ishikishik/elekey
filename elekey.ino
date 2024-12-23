// 本当のファイル名は "LedTickOnAttiny13a.ino"
// マイコンは ATtiny13a を使用
// ハードウェアパッケージは MicroCore を使用
// 設定は底部に書きます
void setup() {
  pinMode(PIN5, OUTPUT);         //PIN7 (ATtiny13a 7番ピン)を、出力モード(=OUTPUT)に設定
}

void loop() {                    //2秒ごとに、点滅を10回繰り返し、ループを抜け終了するプログラム
digitalWrite(PIN5,HIGH);
delay(500);
digitalWrite(PIN5,LOW);
delay(500);


}




