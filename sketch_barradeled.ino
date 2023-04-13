int var = A5; // creamos una variable analogica para el potenciometro
int Al; //variable de lectura
int l1 = 3; /*variables para las leds*/
int l2 = 5;
int l3 = 6;
int l4 = 9;
int l5 = 10;/**/

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);//activamos monitor serial
 pinMode(var, INPUT);//activamos como entrada
 pinMode(l1, OUTPUT);/*Activamos como salida*/
 pinMode(l2, OUTPUT);
 pinMode(l3, OUTPUT);
 pinMode(l4, OUTPUT);
 pinMode(l5, OUTPUT);/**/
}

void loop() {
  // put your main code here, to run repeatedly:
  Al=analogRead(var); //permitimos que lea la entrada del potenciometro
  if(Al >=1 && Al <=205) { //cremos una condicional que nos permita encender el led en cierto rango
    digitalWrite(l1,HIGH); //encendemos el led
  } else {
    digitalWrite(l1,LOW); //apagamos el led
  }

  Al=analogRead(var); //permitimos que lea la entrada del potenciometro
  if(Al >=1 && Al <=401) { //cremos una condicional que nos permita encender el led en cierto rango
    digitalWrite(l2,HIGH); //encendemos el led
  } else {
    digitalWrite(l2,LOW); //apagamos el led
  }

  Al=analogRead(var); //permitimos que lea la entrada del potenciometro
  if(Al >=1 && Al <=615) { //cremos una condicional que nos permita encender el led en cierto rango
    digitalWrite(l3,HIGH); //encendemos el led
  } else {
    digitalWrite(l3,LOW); //apagamos el led
  }

  Al=analogRead(var); //permitimos que lea la entrada del potenciometro
  if(Al >=1 && Al <=819) { //cremos una condicional que nos permita encender el led en cierto rango
    digitalWrite(l4,HIGH); //encendemos el led
  } else {
    digitalWrite(l4,LOW); //apagamos el led
  }

  Al=analogRead(var); //permitimos que lea la entrada del potenciometro
  if(Al >=1 && Al <=1023) { //cremos una condicional que nos permita encender el led en cierto rango
    digitalWrite(l5,HIGH); //encendemos el led
  } else {
    digitalWrite(l5,LOW); //apagamos el led
  }

}
