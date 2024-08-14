/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdlib.h>
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
