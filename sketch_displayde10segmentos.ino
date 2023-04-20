const int bot_1 = 12;//variables que van conectadas al arduino
const int bot_2 = 13;
const int bot_3 = A1;
const int bot_4 = A0;
const int L1 = 2;
const int L2 = 3;
const int L3 = 4;
const int L4 = 5;
const int L5 = 6;
const int L6 = 7;
const int L7 = 8;
const int L8 = 9;
const int L9 = 10;
const int L10 = 11;
int A;//variables para guardar datos
int N;
int D;
int R;
#define in_1() pinMode(bot_1,INPUT)//definimos nombres de comandos
#define in_2() pinMode(bot_2,INPUT)
#define in_3() pinMode(bot_3,INPUT)
#define in_4() pinMode(bot_4,INPUT)
#define sa1() pinMode(L1,OUTPUT)
#define sa2() pinMode(L2,OUTPUT)
#define sa3() pinMode(L3,OUTPUT)
#define sa4() pinMode(L4,OUTPUT)
#define sa5() pinMode(L5,OUTPUT)
#define sa6() pinMode(L6,OUTPUT)
#define sa7() pinMode(L7,OUTPUT)
#define sa8() pinMode(L8,OUTPUT)
#define sa9() pinMode(L9,OUTPUT)
#define sa10() pinMode(L10,OUTPUT)

void setup() {
  // put your setup code here, to run once:
  in_1();//actvamos las entradas y salidas 
  in_1();
  in_1();
  in_1();
  sa1();
  sa2();
  sa3();
  sa4();
  sa5();
  sa6();
  sa7();
  sa8();
  sa9();
  sa10();

}

void loop() {
  // put your main code here, to run repeatedly:
  int A = digitalRead(bot_1); //comando para activar la primera secuencia de el display
  if (A == 1) {
  digitalWrite(L1,HIGH);
  delay(500);
  digitalWrite(L1,LOW);
  delay(500);
  digitalWrite(L2,HIGH);
  delay(500);
  digitalWrite(L2,LOW);
  delay(500); 
  digitalWrite(L3,HIGH);
  delay(500);
  digitalWrite(L3,LOW);
  delay(500);
  digitalWrite(L4,HIGH);
  delay(500);
  digitalWrite(L4,LOW);
  delay(500);
  digitalWrite(L5,HIGH);
  delay(500);
  digitalWrite(L5,LOW);
  delay(500);
  digitalWrite(L6,HIGH);
  delay(500);
  digitalWrite(L6,LOW);
  delay(500);
  digitalWrite(L7,HIGH);
  delay(500);
  digitalWrite(L7,LOW);
  delay(500);
  digitalWrite(L8,HIGH);
  delay(500);
  digitalWrite(L8,LOW);
  delay(500);
  digitalWrite(L9,HIGH);
  delay(500);
  digitalWrite(L9,LOW);
  delay(500);
  digitalWrite(L10,HIGH);
  delay(500);
  digitalWrite(L10,LOW);
  delay(500);
  }else{
    digitalWrite(L1,LOW); //apagar todos los segmentos del display
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
    digitalWrite(L5,LOW);
    digitalWrite(L6,LOW);
    digitalWrite(L7,LOW);
    digitalWrite(L8,LOW);
    digitalWrite(L9,LOW);
    digitalWrite(L10,LOW);
  }

  int N = digitalRead(bot_2); //comando para activar la primera secuencia de el display
  if (N == 1) {
  digitalWrite(L2,HIGH);
  delay(500);
  digitalWrite(L2,LOW);
  delay(500);
  digitalWrite(L4,HIGH);
  delay(500);
  digitalWrite(L4,LOW);
  delay(500); 
  digitalWrite(L6,HIGH);
  delay(500);
  digitalWrite(L6,LOW);
  delay(500);
  digitalWrite(L8,HIGH);
  delay(500);
  digitalWrite(L8,LOW);
  delay(500);
  digitalWrite(L10,HIGH);
  delay(500);
  digitalWrite(L10,LOW);
  delay(500);
  digitalWrite(L1,HIGH);
  delay(500);
  digitalWrite(L1,LOW);
  delay(500);
  digitalWrite(L3,HIGH);
  delay(500);
  digitalWrite(L3,LOW);
  delay(500);
  digitalWrite(L5,HIGH);
  delay(500);
  digitalWrite(L5,LOW);
  delay(500);
  digitalWrite(L7,HIGH);
  delay(500);
  digitalWrite(L7,LOW);
  delay(500);
  digitalWrite(L9,HIGH);
  delay(500);
  digitalWrite(L9,LOW);
  delay(500);
  }else{
    digitalWrite(L1,LOW); //apagar todos los segmentos del display
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
    digitalWrite(L5,LOW);
    digitalWrite(L6,LOW);
    digitalWrite(L7,LOW);
    digitalWrite(L8,LOW);
    digitalWrite(L9,LOW);
    digitalWrite(L10,LOW);
  }

int D = digitalRead(bot_3); //comando para activar la primera secuencia de el display
  if (D == 1) {
  digitalWrite(L1,HIGH);
  delay(500);
  digitalWrite(L1,LOW);
  delay(500);
  digitalWrite(L3,HIGH);
  delay(500);
  digitalWrite(L3,LOW);
  delay(500); 
  digitalWrite(L5,HIGH);
  delay(500);
  digitalWrite(L5,LOW);
  delay(500);
  digitalWrite(L7,HIGH);
  delay(500);
  digitalWrite(L7,LOW);
  delay(500);
  digitalWrite(L9,HIGH);
  delay(500);
  digitalWrite(L9,LOW);
  delay(500);
  digitalWrite(L2,HIGH);
  delay(500);
  digitalWrite(L2,LOW);
  delay(500);
  digitalWrite(L4,HIGH);
  delay(500);
  digitalWrite(L4,LOW);
  delay(500);
  digitalWrite(L6,HIGH);
  delay(500);
  digitalWrite(L6,LOW);
  delay(500);
  digitalWrite(L8,HIGH);
  delay(500);
  digitalWrite(L8,LOW);
  delay(500);
  digitalWrite(L10,HIGH);
  delay(500);
  digitalWrite(L10,LOW);
  delay(500);
  }else{
    digitalWrite(L1,LOW); //apagar todos los segmentos del display
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
    digitalWrite(L5,LOW);
    digitalWrite(L6,LOW);
    digitalWrite(L7,LOW);
    digitalWrite(L8,LOW);
    digitalWrite(L9,LOW);
    digitalWrite(L10,LOW);
  }

  int R = digitalRead(bot_4); //comando para activar la primera secuencia de el display
  if (R == 1) {
  digitalWrite(L10,HIGH);
  delay(500);
  digitalWrite(L10,LOW);
  delay(500);
  digitalWrite(L9,HIGH);
  delay(500);
  digitalWrite(L9,LOW);
  delay(500); 
  digitalWrite(L8,HIGH);
  delay(500);
  digitalWrite(L8,LOW);
  delay(500);
  digitalWrite(L7,HIGH);
  delay(500);
  digitalWrite(L7,LOW);
  delay(500);
  digitalWrite(L6,HIGH);
  delay(500);
  digitalWrite(L6,LOW);
  delay(500);
  digitalWrite(L5,HIGH);
  delay(500);
  digitalWrite(L5,LOW);
  delay(500);
  digitalWrite(L4,HIGH);
  delay(500);
  digitalWrite(L4,LOW);
  delay(500);
  digitalWrite(L3,HIGH);
  delay(500);
  digitalWrite(L3,LOW);
  delay(500);
  digitalWrite(L2,HIGH);
  delay(500);
  digitalWrite(L2,LOW);
  delay(500);
  digitalWrite(L1,HIGH);
  delay(500);
  digitalWrite(L1,LOW);
  delay(500);
  }else{
    digitalWrite(L1,LOW); //apagar todos los segmentos del display
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
    digitalWrite(L4,LOW);
    digitalWrite(L5,LOW);
    digitalWrite(L6,LOW);
    digitalWrite(L7,LOW);
    digitalWrite(L8,LOW);
    digitalWrite(L9,LOW);
    digitalWrite(L10,LOW);
  }

}
