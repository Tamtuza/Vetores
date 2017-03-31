/*
* EXERCÍCIO 8 - Preencher um vetor com os numeros 10 a 20, e depois mostrar os
*           elementos ímpares do vetor. 
*
**/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<string.h>

main(){
       system("color 6");
       int z, vet[11], t = 10;
       for(z = 0; z < 11; z++){
             vet[z] = t;
             t++;
             //printf("%d\t",vet[z]); Caso eu quisesse mostrar o vetor completo
       }
       printf("\n\n");
       for(z = 1; z < 11; z = z + 2)
       printf("%d\t", vet[z]);
       printf("\n");

       system("pause"); 
       return(0);
}
