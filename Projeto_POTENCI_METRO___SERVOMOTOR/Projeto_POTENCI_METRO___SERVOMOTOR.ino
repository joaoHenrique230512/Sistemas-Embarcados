
ETEC BENTO QUIRINO
Aluno: João Henrique 2°DS
Data: 07/06/2022 


*/
#include <Servo.h> 

Servo servo1; //cria um novo objeto servo

int potenciometroPino0 = 0; //conecta potenciometro na porta analogica 0

int valorDoPotenciometro = 0; //valor lido no pino 0

void setup (){
  
  servo1.attach(9); //conecta o objeto servo1 ao pino 9
  
  
}

void loop(){

  valorDoPotenciometro = analogRead(potenciometroPino0);
  //um valor analógico do potenciometro de  0 a 255
  valorDoPotenciometro = map(valorDoPotenciometro, 0, 1023, 0, 179);//mapeia
  //o valor lido entre 0 a 1023 para uma valor ente 0 e 180
  servo1.write(valorDoPotenciometro); // envia sinal para o servo posicionar
  
  delay(15); //aguarda movimento do servo
  
  
}
