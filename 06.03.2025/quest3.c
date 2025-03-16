#include <stdio.h>

int main() {

int num1, num2, num3;

printf("Digite 3 valores: ");

scanf("%d", &num1);

scanf("%d",&num2);

scanf("%d",&num3);

 

//scanf("%d %d %d", &num1, &num2, &num3)

 

int maior = num1; //15

 

//13   //15 = F ou 0

if (num2 > maior) {

maior = num2; //13

}

//20   //15 = V O

if (num3 > maior) {

maior = num3; 

}

 

printf("O maior valor e %d", maior); 

}
