float resis1=100000;//creamos una variable para la resistencia 1 con su valor respectiva
float resis2=71400;//creamos una variable para la resistencia 2 con su valor respectiva
void setup(){
Serial.begin(9600);//activamos el monitor serial
}
void loop()
{
float v=(analogRead(0)*5)/1023.0;//creamos una variable que active el pin analogico
float factor=(v/(resis2/(resis1+resis2)));//creamos una variable que nos guarde el valor de la operacion
Serial.print("v= "); 
Serial.println(factor);//mostramos el resultado
delay(500);//le damos un tiempo de recarga

}