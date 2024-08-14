#include <stdio.h>
#include <locale.h>

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
