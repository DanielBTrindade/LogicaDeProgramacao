#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;

    int hora_valida = hora_cinema +30;

    if(hora_atual>hora_valida){
            printf("passou o tempo limite! Não pode entrar!");
        }else if(hora_atual<hora_cinema -30){
            printf("nem abriu a porta do cinema");
        }else{
            printf("O horario está certo! Pode entrar!");
        }

    return 0;
}
