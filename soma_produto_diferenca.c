/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n1;
int n2;
int main()
{
    printf("Diga um número: ");
    scanf("%d" , &n1);
    printf("Diga outro número: ");
    scanf("%d" , &n2);
    printf("A soma desses números é: %d \n" , n1+n2);
    printf("O produto desses números é: %d \n" , n1*n2);
    printf("A diferença desses números é: %d \n" , n1-n2);

    return 0;
}
