#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    printf("HELLO WORLD!!\n");
    printf("A VIDA NAO LHE PERGUNTA SE VOCÊ QUER SER FORTE. ELA TE OBRIGA A SER!");

    return 0;
}
