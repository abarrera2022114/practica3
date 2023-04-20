
const long SI=1975.53,   //creamos unas variables para las notas musicales
            RES=2349.32,
            LA=1880.66,
            SOl=1567.98,
            LAS=3502.00,
            SOlS=3322.44,
            DOS=2093.01,
            REES=4698.64,
            SIS=3951.07,
            DOOS=2217.46,
            MIS=2637.02,
            SOOLS=6271.93,
            REEES=4978.03,
            FA=5587.65,
            PAU=30000;
const int melodia1[] = {SI,RES,LA,SOl,LA,SI,RES,LA,PAU,SI,RES,LAS,SOlS, //partitura convertida a mano de la cancion
                      REES,DOS,SI,LA,SOl,LA,SI,RES,LA,PAU,SI,RES,LA,PAU,
                      SI,RES,LAS,SOOLS,REES,SOOLS,LAS,SIS,DOOS,REEES,DOOS,SIS,};
                      int a=3000, d=1000, e=500, m=250, c=125; //pausa de cada nota
const int duracionNota1[] = {d,e,d,m,m,d,e,d,d,d,e,d,e,//timepo que durara cada nota
                            d,m,m,d,m,m,d,e,d,e,d,e,d,e,
                            d,e,d,e,a,c,c,c,c,d,m,m};

const int buzzerPin = 2;//variables de pines que estaran conectados al arduino
const int bot_1 = 3;
const int bot_2 = 4;
const int led_1 = 5;
const int led_2 = 6;
int A;//variables para guardar datos
int N;
const int SA_1;//variables para salidas de los botones
const int SA_2;
#define in_1() pinMode(bot_1,INPUT)//asignamos nombres a algunos comandos
#define in_2() pinMode(bot_2,INPUT)
#define SA_1() pinMode(led_1,OUTPUT)
#define SA_2() pinMode(led_2,OUTPUT)

void setup() {
  // put your setup code here, to run once:
  in_1();//activamos pines
  in_2();
  SA_1();
  SA_2();
  pinMode(buzzerPin,OUTPUT);//activamos el pin para el buzzer
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int A = digitalRead(bot_1); //comando que activa la primera canción "Saria's song"
  if(A == 1) {
    digitalWrite(led_1,HIGH);//encendemos la led
    tone(buzzerPin, 659); //codigo de cancion convertida a archivo midi
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(500);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(500);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 1319);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(500);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(1000);
  noTone(buzzerPin);
    } else {digitalWrite(led_1,LOW);} //apagamos la led

  int N = digitalRead(bot_2); //comando que activa la primera canción "Zelda Lullaby"
  if(N == 1) {
    digitalWrite(led_2,HIGH); //encendemos la led
    for (int notaActual1 = 0; notaActual1 < 39; notaActual1++) {  //va a repetir las 39 notas
      tone(buzzerPin, melodia1[notaActual1]); //da el tono a la frecuencia de la nota en ese momento
      delay(duracionNota1[notaActual1]);//se mantiene con la nota el tiempo definido para esa nota
     noTone(buzzerPin); //finaliza la melodía
    } 
    }else {digitalWrite(led_2,LOW);} //apagamos la led

}
