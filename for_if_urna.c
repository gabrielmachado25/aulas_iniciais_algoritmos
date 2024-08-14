#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int v, t[3], i;
    for(i=0;i<=2;i++)
    t[i] = 0;
    printf("* Urna Eletrônica*\n");
    for(i=1; i<=5; i=i+1)
    {
        printf("1-Ada\n");
        printf("2-Pascal\n");
        printf("3-Turing\n");
        printf("Digite o %dº voto:\n", i);
        scanf("%d", &v);

       if (v<1 || v>3)
        printf("Voto inválido: não computado!\n");
        else t[v-1] = t[v-1] + 1;

        getch();
        system("cls"); //limpe a tela
    }
    printf("Resultado da Eleição:\n");
    printf("Votos para Ada: %d\n", t[0]);
    printf("Votos para Pascal: %d\n", t[1]);
    printf("Votos para Turing: %d\n", t[2]);
    return 0;

}
