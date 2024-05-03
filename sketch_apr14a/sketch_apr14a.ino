int valor_limite =400;
float valor_alcohol;
 float valor_alcohol_inicial;
 float valor_alcohol_calibrado;


void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);
   pinMode(13,OUTPUT);
   valor_alcohol_inicial=analogRead(A1);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor_alcohol=analogRead(A1);
    valor_alcohol_calibrado =-valor_alcohol_inicial+valor_alcohol;
    
    
 
   if(valor_alcohol_calibrado<0){
          valor_alcohol_calibrado=valor_alcohol_calibrado*-1;
          
           


    }
if(valor_alcohol_calibrado<20.f){

            Serial.print("Nivel de alcoholemia: BAJO ;");




          }else{
            if(valor_alcohol_calibrado<100.f){

             Serial.print("Nivel de alcoholemia: ALTO ;");
            }else{
              
              Serial.print("Nivel de alcoholemia: EXTREMO ;");


            }
          }
    

     Serial.println(valor_alcohol_calibrado);
  float porcentaje = (valor_alcohol_calibrado*1000);

 

delay(4000);
  
}
