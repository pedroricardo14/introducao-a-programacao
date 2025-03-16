#include <stdio.h>

 

int main(){

 

int user, senha;

 

printf("Digite o usuario: ");

scanf("%d", &user);

printf("Digite a senha: ");

scanf("%d", &senha);

 

//escolha 'user'

switch(user){

case 1234:

switch(senha){

case 123456:

printf("Acesso permitido!\n");

break;

default:

printf("Acesso negado!\n");

}

break;

default:

printf("Acesso negado!\n");

}

 

 

return 0;

}
