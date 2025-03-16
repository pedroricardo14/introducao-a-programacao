#include <stdio.h>

 

int main() {

int velocidade;

printf("Digite a velocidade: ");

scanf("%d", &velocidade);

 

switch(velocidade){

case 0 ... 80:

printf("nao recebeu multa");

break;

case 81 ... 100:

printf("recebeu multa simples");

break;

case 101 ... 400:

printf("recebeu multa dobrada");

default:

printf("Quilometragem invalida");

}

}
