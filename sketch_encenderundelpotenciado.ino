 int var = A5; //variable de potenciometro
 int A; //variable de lectura
 int L = 3; //variable del led

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //activamos el monitor serial
  pinMode(var,INPUT);//activamos el pin de entrada
  pinMode(L,OUTPUT);//activamos el pin de salida
}

void loop() {
  // put your main code here, to run repeatedly:
 A = analogRead(var)/4;//guardamos el valor en una variable
 analogWrite(L, A);//permitimos que la led varie dependiendo de la variable que usamos anteriormente
 Serial.println(A);
 delay(10);//damos un delay para que no halla ruido en la led

}
