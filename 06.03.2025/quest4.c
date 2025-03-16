#include <stdio.h>

int main(){

int valor;

 

printf("Informe um valor: ");

scanf("%d",&valor);

 

if(valor%2 == 0){

printf("%d eh um numero par!",valor);

}else{

printf("%d eh um numero impar!",valor);

}

return 0;

}
