#include <stdio.h>
#include <locale.h>

int n1, n2, opcao, resultado;
resultado = 0; // Inicialização de uma variável

int main(){
setlocale(LC_ALL, "Portuguese");

    printf("Informe o primeiro número: ");
    scanf("%d",&n1);
    printf("Informe o segundo número: ");
    scanf("%d",&n2);

    printf("(1) Somar\n");
    printf("(2) Subtrair\n");
    printf("(3) Multiplicar\n");
    printf("(4) Dividir\n");

    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        resultado=n1+n2;
        break;
    case 2:
        resultado=n1-n2;
        break;
    case 3:
        resultado=n1*n2;
        break;
    case 4:
        resultado=n1/n2;
        break;
    default:
        printf("Opção inválida!");
    }

    printf("Resultado = %d",resultado);

    return 0;
}
