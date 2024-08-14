/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>
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
