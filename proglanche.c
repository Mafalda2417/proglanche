#include <stdio.h>

int main(){
    int codigo;
    int preco;
    int quantidade;
    int valorfinal;
    int totalapagar;

    printf("Código do produto?\n");
    scanf("%d", &codigo);
    printf("Quantidade do produto?\n");
    scanf("%d", &quantidade);

    if(codigo == 100){
        printf("Artigo escolhido: Cachorro quente\n");
        printf("Quantidade: %d\n", quantidade);
        valorfinal = quantidade*2.5;
        printf("Valor a ser pago: %d euros\n", valorfinal);
    }else if(codigo == 101){
        printf("Artigo escolhido: Hambúrger\n");
        printf("Quantidade: %d\n", quantidade);
        valorfinal = quantidade*3.5;
        printf("Valor a ser pago: %d euros\n", valorfinal);
    }else if(codigo == 102){
        printf("Artigo escolhido: Cheeseburger\n");
        printf("Quantidade: %d\n", quantidade);
        valorfinal = quantidade*4;
        printf("Valor a ser pago: %d euros\n", valorfinal);
    }else if(codigo == 103){
        printf("Artigo escolhido: Omolete\n");
        printf("Quantidade: %d\n", quantidade);
        valorfinal = quantidade*3.75;
        printf("Valor a ser pago: %d euros\n", valorfinal);
    }else if(codigo == 104){
        printf("Artigo escolhido: Francesinha\n");
        printf("Quantidade: %d\n", quantidade);
        valorfinal = quantidade*7.5;
        printf("Valor a ser pago: %d euros\n", valorfinal);
    }
}