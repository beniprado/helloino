
  int a=2,b=3,c=4,d=5,e=6,f=7,g=8,ponto=9;
  char data='0';
  
  void setup() {
    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);
    pinMode(ponto, OUTPUT);
   Serial.begin(9600);
} 

void Apagar() {
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  digitalWrite(ponto,LOW);
}
void H(){
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH); 
  digitalWrite(f,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);
  Apagar();
}
  void E(){
    digitalWrite(a,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
    delay(1000);
    Apagar();
  }
  void L(){
    digitalWrite(f,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(d,HIGH);
    delay(1000);
    Apagar();
  }

  void o(){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    delay(1000);
    Apagar(); 
  }  
  void Ponto(){
    digitalWrite(ponto,HIGH);
    delay(500);
    digitalWrite(ponto,LOW);
    delay(500);
  }
  void loop(){
    if(Serial.available()){
      data = Serial.read();
    }
    if (data=='0'){
      Ponto();
    }
    else if (data=='1'){
      H();
      E();
      L();
      Apagar();
      delay(200);
      L();
      o();
    }
    else{
      Serial.println("Não reconhecido");
    }
  }
    
  // put your main code here, to run repeatedly:
