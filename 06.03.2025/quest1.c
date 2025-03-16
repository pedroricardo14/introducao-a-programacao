#include <stdio.h>

int main(){

int num1, num2;

printf("Digite dois numeros: ");

scanf("%d %d", &num1, &num2);

if(num1 == num2){

printf("Os dois numeros sao iguais!!!");

}else if(num1 > num2){

printf("%d eh maior do que %d", num1, num2);

}else{

printf("%d eh maior do que %d", num2, num1);

}

 

return 0;

}