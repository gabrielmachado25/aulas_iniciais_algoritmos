#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int idade;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Está chegando a data da competição. Vamos descobrir em qual modalidade você se encaixa. \n");
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
    if(idade>=6 && idade<=8)
    printf("Você participará na categoria Infantil A!");
    if(idade>=9 && idade<=12)
    printf("Você participará na categoria Infantil B!");
    if(idade>=13 && idade<=14)
    printf("Você participará na categoria Juvenil A!");
    if(idade>=15 && idade<=18)
    printf("Você participará na categoria Juvenil B!");
    else
    printf("Você não possui idade suficiente para participar da competição. \n");
    
    
getch();

return 0;

}


