#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int n1, n2, n3;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);
    printf("Digite outro número: ");
    scanf("%d", &n3);
    printf("Soma = %d \n", n1+n2+n3);
    printf("Produto = %d \n", n1*n2*n3);
    
    if(n1>n2 && n1>n3)
    printf("%d é o maior número.\n",n1);
    if(n2>n1 && n2>n3)
    printf("%d é o maior número.\n",n2);
    if(n3>n1 && n3>n2)
    printf("%d é o maior número.\n",n3);
    
    if(n1<n2 && n1<n3)
    printf("%d é o menor número.\n" , n1);
    if(n2<n1 && n2<n3)
    printf("%d é o menor número.\n" , n2);
    if(n3<n1 && n3<n2)
    printf("%d é o menor número.\n" , n3);
    
getch();

return 0;

}


