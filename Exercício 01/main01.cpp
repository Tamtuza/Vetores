/*
* EXERCÍCIO 1 - Informar 3 nomes. Mostrar quantas letras "A" e "E" possuem.
*
***/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

main(){
       char nome[3][30], conte = 0, conta = 0, tam = 0;
       int x, m;
       for (x = 0; x < 3; x++){
             printf("Informe nome %d: ", x + 1);
             gets(nome[x]);
             printf("\n");
       }
       for (x = 0; x < 3; x++){
             tam = strlen(nome[x]);
             for (m = 0; m <= tam - 1; m++){
                   if (nome[x][m] == 'A' || nome[x][m] == 'a')
                      conta++;
                   if (nome[x][m] == 'E' || nome[x][m] == 'e')
                      conte++;
             }
       }

printf("\n_________________________________________");
printf("\n| Ha %d letras A, %d letras E|", conta, conte);
printf("\n|_________________________________________|");
printf("\n\n");
system("pause");
return(0);
}
