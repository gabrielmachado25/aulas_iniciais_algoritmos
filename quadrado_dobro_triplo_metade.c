#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n;
int main()
{
    printf("Diga um número inteiro: ");
    scanf("%f",&n);
    printf("O quadrado de %.0f é: %.2f \n", n,n*n);
    printf("O dobro de %.0f é: %.2f \n", n,n*2);
    printf("O triplo de %.0f é: %.2f \n", n,n*3);
    printf("A metade de %.0f é: %.2f \n", n,n/2);

    return 0;
}
