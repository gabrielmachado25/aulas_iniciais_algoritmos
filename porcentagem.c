#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int n;
int main()
{
    printf("Diga um número inteiro: ");
    scanf("%d",&n);
    printf("3%% de %d é: %f\n", n, n*0.03);
    printf("30%% de %d é: %f\n", n, n*0.3);
    printf("130%% de %d é: %f\n", n, n*1.3);

    return 0;
}
