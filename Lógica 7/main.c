#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player1[256];
    char player2[256];

    printf("Player 1, sua vez...\n");
    scanf("%s", &player1);

    printf("\nPlayer 2, sua vez...\n");
    scanf("%s", &player2);

    printf("\nAguarde, estamos calculando...\n");

    if(strcmp(player1, "papel")== 0){

        if(strcmp(player2, "papel")== 0){
            printf("Empate!");
        }else if(strcmp(player2, "tesoura")== 0){
            printf("Player 2 ganhou!");
        }else if(strcmp(player2, "pedra")== 0){
            printf("Player 1 ganhou!");
        }else{
            printf("\nPlayer 2 jogou uma informção inválida");
        }

    }else if(strcmp(player1, "tesoura")== 0){
                    if(strcmp(player2, "papel")== 0){
                    printf("\nPlayer 1 ganhou!");
                    }else if(strcmp(player2, "tesoura")== 0){
                        printf("\nEmpate!");
                    }else if(strcmp(player2, "pedra")== 0){
                        printf("\nPlayer 2 ganhou!");
                    }else{
                        printf("\nVocê jogou uma informção inválida");
                    }

    }else if(strcmp(player1, "pedra")== 0){

            if(strcmp(player2, "papel")== 0){
            printf("Player 2 ganhou!");
        }else if(strcmp(player2, "tesoura")== 0){
            printf("Player 1 ganhou!");
        }else if(strcmp(player2, "pedra")== 0){
            printf("Empate!");
        }else{
            printf("Você jogou uma informção inválida");
        }


    }else{
        printf("Você jogou uma informção inválida");
    }

    return 0;
}
