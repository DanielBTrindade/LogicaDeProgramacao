#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[256];
    int idade;

    printf("Ol�! Qual seu nome?\n");
    scanf("%s", &nome);

    printf("\nQual sua idade?\n");
    scanf("%d", &idade);

    printf("\nNome: %s \nIdade: %d\n", nome, idade);
    printf("\nAguarde...\n");
    printf("\nA primeira letra do seu nome �: %c\n", nome[0]);

    if(idade >= 65){
        printf("Voc� � idoso!");
    }else if(idade >= 18){
        printf("\nVoc� � adulto!\n");
    }else if(idade >= 12){
        printf("\nVoc� � adolecente!\n");
    }else if(idade > 3 ){
        printf("\nVoc� � crian�a!\n");
    }else{
        printf("Voc� � um beb�");
    }

    return 0;
}
