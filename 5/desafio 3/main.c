#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

int menu;
float num1,numnum1,resultado1;

printf("escolha uma op��o: \n");
printf("1- soma \n");
printf("2- subtra��o \n");
printf("3- multiplica��o \n");
printf("4- divi��o \n");
printf("5- cr�ditos \n");

scanf("%i", &menu);

switch(menu){
 case 1:

     printf("digite um n�mero:\n ");
     scanf("%f", &num1);

     printf("digite outro n�mero:\n");
     scanf("f", &numnum1);

     resultado1 = num1 + numnum1;

     printf("o resultado �: %.2f \n ",resultado1);

     break;

 case 2:

printf("digite um n�mero:\n ");
     scanf("%f", &num1);

     printf("digite outro n�mero:\n");
     scanf("%f", &numnum1);

     resultado1 = num1 - numnum1;

     printf("o resultado �: %.2f \n ",resultado1);

    break;

 case 3:

printf("digite um n�mero:\n ");
     scanf("%f", &num1);

     printf("digite outro n�mero:\n");
     scanf("%f", &numnum1);

     resultado1 = num1 * numnum1;

     printf("o resultado �: %.2f \n ",resultado1);

    break;

 case 4:
printf("digite um n�mero:\n ");
     scanf("%f", &num1);

     printf("digite outro n�mero:\n");
     scanf("%f", &numnum1);

     resultado1 = num1 / numnum1;

     printf("o resultado �: %.2f \n ",resultado1);

    break;

 case 5:

    printf("criadora: coelha/Liz \n");
    printf("com a ajudinha de: Yuko \n");
    printf("ideia de: Yuko \n");
    printf("obrigada por testar <3 \n");

    break;

 default:
     printf("inv�lido,por favor escolha um dos n�meros apresentados \n");
    break;
}
 getch();



}

