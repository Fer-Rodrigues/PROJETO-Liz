#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>


int main()
{
    float imc, altura, peso;

    printf("digite sua altura: " );
    scanf("%f", &altura);
    printf("digite o peso: " );
    scanf("%f", &peso);

    imc = peso/(altura*altura);

 printf("imc = %.2f", imc);

    getch();//pausadetela


    return 0;
}
