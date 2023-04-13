int pinmedicion = A1; //pin analogico para medir
int R1 = 1000; //Valor de la R1
long lectura; // variable de lectura
float tension = 5.0; //tension del voltaje
float VolR2; //Variable para tener el voltaje de R2
float Resistencia; //variable para poder guardar el valor de la resistencia

void setup()
{
  Serial.begin(9600); //Activa el monitor serial
}

void loop()
{
   // Leemos el valor en el pin A5
  lectura=0;
  for(int i=0;i<5;i++){
    lectura+=analogRead(pinmedicion);//Con estos pasos hacemos que el pin de 
    								 //lectura cumpla su función
  }
  lectura=trunc(lectura/5);
  
  // Colculamos el voltaje en la resistencia desconocida
  VolR2=(tension/1023.0)*lectura;
  Serial.print("valor del voltaje: ");
  Serial.println(VolR2);// Presenta el valor del voltaje de la R2
  
  //Calculamos la resistencia desconocida con las fórmulas
  // (V1/R1=V2/R2) y (V1=+5V-V2)
  Resistencia=R1*VolR2/(tension-VolR2);
  Serial.println("Valor de la resistencia");
  Serial.print("La resistencia tiene un valor de: ");
  Serial.print(Resistencia,5);
  Serial.println(" Ohm.");
  Serial.println();
  delay(5000);
}