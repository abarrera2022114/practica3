#include <Servo.h>

const int bot_1 = 7;//creamos las variables
const int bot_2 = 2;
const int bot_3 = 3;
const int bot_4 = 4;
const int bot_5 = 5;
const int buzzer = 8;
Servo cito; //variable para poder usar el servomotor
const int in_1; //creamos las variables de las entradas
const int in_2;
const int in_3;
const int in_4;
const int in_5;
int A;//variables para guardar datos
int N;
int D;
int R;
int E;
#define in_1() pinMode(bot_1,INPUT)//definimos nombres de comandos
#define in_2() pinMode(bot_2,INPUT)
#define in_3() pinMode(bot_3,INPUT)
#define in_4() pinMode(bot_4,INPUT)
#define in_5() pinMode(bot_5,INPUT)
#define buzzon() tone(buzzer, 200.0, 1000)
#define buzzoff() noTone(buzzer)
#define time() delay(1500)

void setup() {
  // put your setup code here, to run once:
  in_1();//activamos las entradas y salidas
  in_2();
  in_3();
  in_4();
  in_5();
  cito.attach(6);//activamos el pin del servo
  buzzon();
  buzzoff();

}

void loop() {
  // put your main code here, to run repeatedly:
  int A = digitalRead(bot_1); //comando para activar el primer movimiento del servomotor
  if (A == 1) {
    cito.write(45);
    time();
  }else{
    buzzoff();
  }

  int N = digitalRead(bot_2);//comando para activar el primer movimiento del servomotor
  if (N == 1) {
    cito.write(90);
    time();

  int D = digitalRead(bot_3);//comando para activar el primer movimiento del servomotor
  if (D == 1) {
    cito.write(135);
    time();
  }

  int R = digitalRead(bot_4);//comando para activar el primer movimiento del servomotor
  if (R == 1) {
    cito.write(180);
    time();
  }

  int E = digitalRead(bot_5);//comando para regresar a 0 grados el servo
  if (E == 1) {
    buzzon();
    cito.write(0);
    time();
  }else{
    buzzoff();
  }

}
