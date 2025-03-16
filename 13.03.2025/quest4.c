#include <stdio.h>

 

int main(){

char escolha;

 

printf("Que bebida voce deseja?\nC: Cafe\nS: Suco\nR: Refrigerante: ");

scanf("%c",&escolha);

 

 

switch(escolha){

case 'C': case 'c':

printf("Voce escolheu Cafe");

break;

case 'S': case 's':

printf("Voce escolheu Suco");

break;

case 'R': case 'r':

printf("Voce escolheu Refrigerante");

break;

default:

printf("Opcao Invalida!");

 

}

}
