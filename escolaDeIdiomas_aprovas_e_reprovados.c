#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

main(){
    int qAlu, qAul;
    int i;
    float n1,n2,n3,med,menor,pFal;
    int qFal;
    int qAp, qRepN, qRepF;
    printf("*********************************************\n");
    printf("*             Escola da Idiomas             *\n");
    printf("*********************************************\n");
    do{
      printf("Informe a quantidade de alunos do modulo:");
      scanf("%d",&qAlu);
      if(qAlu <=0)
            printf("\aErro! O modulo deve ter pelo menos 1 aluno!\n\n");
    }while(qAlu<=0);
       do{
      printf("Informe a quantidade de aulas do modulo:");
      scanf("%d",&qAul);
      if(qAul <=0)
            printf("\aErro! O modulo deve ter pelo menos 4 aulas!\n\n");
    }while(qAul<=0);

    printf("Informe as notas de cada aluno:\n");
    //contadores
    qAp = qRepN = qRepF = 0;
    for(i=1;i<=qAlu;i++){
        printf("\nAluno %d:\n",i);
        do{
            printf("Informe a nota 1 (0-10):");
            scanf("%f",&n1);
        }while(n1<0 || n1>10);
        do{
            printf("Informe a nota 2 (0-10):");
            scanf("%f",&n2);
        }while(n2<0 || n2>10);
        do{
            printf("Informe a nota 3 (0-10):");
            scanf("%f",&n3);
        }while(n3<0 || n3>10);
        do{
            printf("Informe a quantidade de faltas (0 - %d):",qAul);
            scanf("%d",&qFal);
        }while(qFal<0 || qFal>qAul);
        //Achando a menor nota
        menor = n1;
        if(n2<menor)
            menor = n2;
        if(n3<menor)
            menor = n3;
        med = (n1+n2+n3-menor)/2;
        //Achando percentual de faltas
        pFal = (qFal*100)/qAul;
        //Encontrando as análises
        if(med>=7.0 && pFal<=25.0)
            qAp++;
        if (med < 7.0)
            qRepN++;
        if (pFal>25.0)
            qRepF++;
    }
    printf("Total de aprovados: %d - %.2f %%\n",qAp,(qAp*100.0)/qAlu);
    printf("Total de reprovados por nota: %d - %.2f %%\n",qRepN,(qRepN*100.0)/qAlu);
    printf("Total de reprovados por falta: %d - %.2f %%\n",qRepF,(qRepF*100.0)/qAlu);
    getch();
}