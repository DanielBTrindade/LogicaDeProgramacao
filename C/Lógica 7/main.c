#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char player1[256];
    char player2[256];

    printf("Player 1, sua vez...\n");
    scanf("%s", &player1);

    printf("\nPlayer 2, sua vez...\n");
    scanf("%s", &player2);

    printf("\nAguarde, estamos calculando...\n");

    if(strcmp(player1, "papel")== 0){
        if(strcmp(player2, "papel")== 0){
            printf("\nEmpate!\n");
        }else if(strcmp(player2, "tesoura")== 0){
            printf("\nPlayer 2 ganhou!\nTesoura corta pepel!\n");
        }else if(strcmp(player2, "pedra")== 0){
            printf("\nPlayer 1 ganhou!\nPapel embrulha pedra!\n");
        }else{
            printf("\nPlayer 2 jogou uma informção inválida\n");
        }
    }else if(strcmp(player1, "tesoura")== 0){
        if(strcmp(player2, "papel")== 0){
            printf("\nPlayer 1 ganhou!\nTesoura corta papel!\n");
        }else if(strcmp(player2, "tesoura")== 0){
            printf("\nEmpate!\n");
        }else if(strcmp(player2, "pedra")== 0){
            printf("\nPlayer 2 ganhou!\nPedra esmaga tesoura!\n");
        }else{
            printf("\nPlayer 2 jogou uma informação inválida\n");
        }
    }else if(strcmp(player1, "pedra")== 0){
        if(strcmp(player2, "papel")== 0){
            printf("\nPlayer 2 ganhou!\nPapel embrulha pedra!\n");
        }else if(strcmp(player2, "tesoura")== 0){
            printf("\nPlayer 1 ganhou!\nPedra esmaga tesoura!\n");
        }else if(strcmp(player2, "pedra")== 0){
            printf("\nEmpate!\n");
        }else{
            printf("\nPlayer 2 jogou uma informação inválida\n");
        }
    }else{
    printf("\nPlayer 1 jogou uma informação inválida\n");
    }

    return 0;
}
