int var1 = A5;  /* cremoa variables para pines analogicos */
int var2 = A4;
int var3 = A3;  
int Rl; //creamos variable para los colores de las lecturas
int Gl;
int Bl;
int L1 = 3; //creamos variables para los pines de la led
int L2 = 5;
int L3 = 6;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); //activamos el monitor serial
 pinMode(var1,OUTPUT); // activamos los pines de salida
 pinMode(var2,OUTPUT);
 pinMode(var3,OUTPUT);
 pinMode(L1,INPUT); //activamos los pines de entrada
 pinMode(L2,INPUT);
 pinMode(L3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Bl=analogRead(var1)/4; //Azul
  analogWrite(L1,Bl);
  delay(100);

  Gl=analogRead(var2)/4; //verde
  analogWrite(L2,Gl);
  delay(100);

  Rl=analogRead(var3)/4; //rojo
  analogWrite(L3,Rl);
  delay(100);
  
  Serial.print("R:  "); 
  Serial.print(Rl); //muestra el valor del potencimetro del red

  Serial.print("  G:  ");
  Serial.print(Gl); //muestra el valor del potencimetro del green

  Serial.print("  B:  ");
  Serial.println(Bl); //muestra el valor del potencimetro del blue

  delay(500);
}
