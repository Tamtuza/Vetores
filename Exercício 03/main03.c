/*
* EXERCÍCIO 3 - Preencher um vetor com 6 numeros e mostra-los na tela. 
*
**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main(){
       int x, vetp[6];
       for (x = 1; x <= 6; x++){
           printf ("\tDigite um numero: ");
           scanf("%d", &vetp[x]);
           printf ("\n");
       }
       for (x = 1; x <= 6; x++)
           printf ("%d\t",vetp[x]);
           printf ("\n");
           printf("\n");
           
           system("pause");
           return(0);
}
