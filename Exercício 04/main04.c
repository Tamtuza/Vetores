/*
* EXERCÍCIO 4 - Preencher um vetor com 5 numeros e a medida que for digitado o
*           numero, calcular o cubo e mostrar em outro vetor.
*           Mostrar os dois vetores.
*
***/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main(){
       float vetp[5], vetc[5];
       int x;
       printf ("\n");
       for(x = 1; x <= 5; x++){
             printf ("\tDigite um numero: ");
             scanf("%f", &vetp[x]);
             vetc[x] = pow(vetp[x], 3);
             printf (" %3.0f", vetc[x]);
             printf ("\n");
       }
       printf("\n");

       system("pause");
       return(0);
}
