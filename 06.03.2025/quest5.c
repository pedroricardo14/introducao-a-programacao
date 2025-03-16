#include <stdio.h>

main(){

float peso, altura, imc;

 

printf("Seu peso: ");

scanf("%f", &peso);

printf("Sua Altura: ");

scanf("%f", &altura);

 

imc = peso/(altura*altura);

printf("IMC = %.2f\n", imc);

if(imc>0){

if(imc < 18.5){

printf("Abaixo do peso");

}else if(18.5 <= imc < 25){

printf("Peso normal");

}else if(25 <= imc < 30){

printf("Sobrepeso");

}else if(30 <= imc < 35){

printf("Obesidade G1");

}else if(35 <= imc < 40){

printf("Obesidade G2");

} else{

printf("Obesidade G3");

}}

else{

printf("[Erro] IMC negativo");

}

}
