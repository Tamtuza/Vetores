/*
* EXERCÍCIO 6 - Preencher um vetor com os numeros 10 a 20, e depois mostrar os
*           elementos pares do vetor de trás prá frente. E também mostrar os
*           números ímpares. 
*
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>
main(){
       system("color E"); // as cores vao de 0 a 15
       int z, x, vet[11], t = 10;
       for (z = 0; z < 11; z++){
           vet[z] = t;
           t++;
       }
       printf("\n\n"); //este for vai contar os pares de tras pra frente.
       for(z = 10; z >= 0; z = z - 2)
             printf("%d\t", vet[z]);
             printf("\n\n");
       for(x = 1; x < 11; x = x + 2)
             printf("%d\t", vet[x]);
             printf("\n");
       system("pause");
       return(0);
}
