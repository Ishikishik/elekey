// 本当のファイル名は "LedTickOnAttiny13a.ino"
// マイコンは ATtiny13a を使用
// ハードウェアパッケージは MicroCore を使用
// 設定は底部に書きます
void setup() {
  pinMode(4, OUTPUT);         //4番ピンを出力に設定
  pinMode(1,INPUT_PULLUP);//1番ピンを長点に設定
  pinMode(2,INPUT_PULLUP);//2番ピンを短点に設定

}

void loop() {   
  int longp;
  int shortp;
  int sp;
  sp=analogRead(A3);//A3に抵抗を接続
  longp = digitalRead(1);
  shortp = digitalRead(2);

  if( longp == LOW && shortp == HIGH){               //長点の処理  
    digitalWrite(4,HIGH);
    delay(sp*3);
    digitalWrite(4,LOW);
    delay(sp);
  }
  if( shortp == LOW && longp == HIGH){               //短点の処理  
    digitalWrite(4,HIGH);
    delay(sp);
    digitalWrite(4,LOW);
    delay(sp);
  }
  if( longp == LOW && shortp == LOW ){               //長短点の処理  
    digitalWrite(4,HIGH);
    delay(sp);
    digitalWrite(4,LOW);
    delay(sp);
    digitalWrite(4,HIGH);
    delay(sp*3);
    digitalWrite(4,LOW);
    delay(sp);
  }
  else{digitalWrite(0,LOW);
  }
}









