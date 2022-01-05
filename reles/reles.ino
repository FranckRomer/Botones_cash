int espera;
int tim_espera = 9000;
int i;

int rele_1 = 32;
int rele_2 = 33;

void setup(){
  pinMode(rele_1, OUTPUT);
  pinMode(rele_2, OUTPUT);
  Serial.begin(115200);
  Serial.println("Empezando programa");
  i = 1;
  espera = 3;
  }

void loop(){
  switch (i) {
  case 1:
    fun1_liberar_sentido1();
    i = 2;
    // statements
    break;
  case 2:
    fun2_liberar_sentido2();
    i =3;
    // statements
    break;
  case 3:
    fun3_tiempo_espera();
    i =1;
    // statements
    break;  
  default:
    // statements
    break;
}

delay(500);
  //Serial.println("mande a llamar la funcion de enciendo mi boton");
  
  
  /*
  Serial.println("Enciende rele 1");
  digitalWrite(rele_1, HIGH);
  delay(1000);
  Serial.println("Apaga rele 1");
  digitalWrite(rele_1, LOW);
  delay(1000);  
  Serial.println("Enciende rele 2");
  digitalWrite(rele_2, HIGH);
  delay(1000);
  Serial.println("Apaga rele 2");
  digitalWrite(rele_2, LOW);
  delay(1000);
  */
}

/////////////////////////////////////////////////////
// Funciones externas 

void prueba(){
  Serial.println("Estoy en una prueba");
  delay(5000);
  
}

void fun1_liberar_sentido1(){
  Serial.println("Has entrado en la funcion liberar sentido");
  Serial.println("Enciende rele 1");
  digitalWrite(rele_1, HIGH);
  delay(tim_espera);
  digitalWrite(rele_1, LOW);
}

void fun2_liberar_sentido2(){
  Serial.println("Has entrado en la funcion liberar sentido DOS");
  Serial.println("Enciende rele 2");
  digitalWrite(rele_2, HIGH);
  delay(tim_espera);
  digitalWrite(rele_2, LOW);
}

void fun3_tiempo_espera(){
  Serial.println("Has entrado en la funcion Cambiar Tiempo de espera");
  if(espera == 3){
    tim_espera = 3000;
    }
  else if(espera == 6){
    tim_espera = 6000;
    }
  else{
    tim_espera = 9000;
    }  
}
