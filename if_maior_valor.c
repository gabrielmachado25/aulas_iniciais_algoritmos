#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int n1, n2;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    if(n1>n2)
    printf("%d é maior que %d." , n1, n2);
    if(n1<n2)
    printf("%d é maior que %d." , n2, n1);
    else
    printf("%d e %d são iguais." , n1, n2);
    
getch();

return 0;

}


