/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n;

int main()
{
    printf("Digite um número inteiro: ");
scanf("%d" , &n);

printf("O número antecessor de %d é %d e o seu sucessor é %d ." , n, n-1, n+1);

    return 0;
}
