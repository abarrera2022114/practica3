const int fotoresistencia = A0; //definimos varibales
const int rele = 3;
#define out() pinMode(rele,OUTPUT)//activamos los pines de salida y entrada
#define in() pinMode(fotoresistencia,INPUT)
#define ence() digitalWrite(rele,HIGH)//los comandos para encender y apagar el rele
#define apag() digitalWrite(rele,LOW)
#define tiem() delay(500)//un delay para usarlo correctamente

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//activamos el monitor serial
  out();//activamos los pines
  in();

}

void loop() {
  // put your main code here, to run repeatedly:
  const int valor_fotoresistencia = analogRead(fotoresistencia); //guardamos el valor de la fotoresistencia
  Serial.println(valor_fotoresistencia);//mostramos el valor en el monitor serial
  
  if (valor_fotoresistencia < 800) {//creamos el comando que hara todo posible
    apag();//que apague el rele asi el foco enciende
  }else{
    ence();//que encienda el rele para que se apague el foco
  }
  tiem();//el tiempo entre cada repeticion
 
}
