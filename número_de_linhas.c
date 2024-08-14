#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void){
    int n, i;
    //Repetição para leitura de n válida
    do{
        printf("Informe o numero de linhas:");
        scanf("%d",&n);
    }while(n<=0);
    //Exibir linhas
    for(i=1;i<=n;i=i+1){
        printf("%d *****\n", i);
    }
}
