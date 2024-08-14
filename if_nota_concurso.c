#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int n1, n2, n3, mp;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Vamos descobrir a sua nota no concurso. \n");
    printf("Qual a sua primeira nota? \n");
    scanf("%d", &n1);
    printf("Qual a sua segunda nota? \n");
    scanf("%d", &n2);
    printf("Qual a sua terceira nota? \n");
    scanf("%d", &n3);
    mp=((n1*2)+(n2*3)+(n3*5))/(2+3+5);
    if(mp>7)
    printf("Parabéns! Você ficou com média %d. Aprovado!\n",mp);
    else
    printf("Estude mais... Você ficou com média %d. Reprovado.\n",mp);
    
    
getch();

return 0;

}


