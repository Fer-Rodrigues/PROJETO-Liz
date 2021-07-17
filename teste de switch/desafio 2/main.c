#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

 int menu;
 printf("escolha um deles: \n");

 printf("1-gatinho amarelo \n");

 printf("2-baleia cinza \n");

 printf("3-cavalo branco \n");

 scanf("%i",&menu);

 switch(menu){
 case 1:
    printf("tu ganhou um gato amarelo");
    break;
 case 2:
    printf("tu ganhou uma baleia cinza");
    break;
 case 3:
    printf("tu ganhou um cavalo branco");
    break;
 default:
    printf("opção invalida,escolha outro por favor");
    break;
 }
 getch();
 printf("\n obrigada por testar e boa escolha :D");




}
