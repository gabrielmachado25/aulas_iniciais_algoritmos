#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL, "Portuguese");

    // temperatura [ 22.5 | 25.6 | | | | ]

    double temperatura[7];

    temperatura[1] = 22.5;
    temperatura[2] = 25.6;
    temperatura[3] = 21.56;

printf("Valor da posicao 1 %.2f \n", temperatura[1]);
printf("Valor da posicao 7 %.2f \n", temperatura[7]);

for (int posicao = 1; posicao <= 3; posicao++){
    printf("Temperatura %.2f \n", temperatura[posicao]);

}
}
