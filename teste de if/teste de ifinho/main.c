#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[10];
    printf("qual o nome do seu namorado ? ");
    scanf("%s",&nome);

    if(strcmp(nome,"yuko") == 0){
        printf("Ownn eu tamb�m te amo moz�o.");
    }else{
        printf("QUEM � ESSE TAL DE %s HEIM COELHA ???", nome);
    }
}
