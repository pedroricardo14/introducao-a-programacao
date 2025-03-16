#include <stdio.h>

int main () {

float consumoMensal, s1, s2, s3;

printf ("Digite seu consumo mensal: ");

scanf ("%f", &consumoMensal);

 

if (consumoMensal <= 50) {

s1 = 0.50 * consumoMensal;

printf ("R$%.2f", s1);

}

else if (consumoMensal > 50 && consumoMensal <= 100) {

s2 = 0.75 * consumoMensal;

printf ("R$%.2f", s2);

}

else if (consumoMensal > 100) {

s3 = 1.20 * consumoMensal;

printf ("R$%.2f", s3);

 

return 0;

}
