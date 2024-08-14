#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int n;

int main()
{
    printf("Digite um número inteiro: ");
scanf("%d" , &n);

printf("O número antecessor de %d é %d e o seu sucessor é %d ." , n, n-1, n+1);

    return 0;
}
