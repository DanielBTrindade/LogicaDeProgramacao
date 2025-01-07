#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int contador=1;
    int limite=10;

    while(contador<=limite){
        printf("%d - Estamos no primeiro LOOP!\n", contador);

        if (contador==3)
        {
            int contador_2 = 5;
            while (contador_2>0){
                printf("%d - Estamos no segundo LOOP!\n", contador_2);

                contador_2--;

            }
        }
        contador++;
    }

    return 0;
}
