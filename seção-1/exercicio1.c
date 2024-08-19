/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod1, qtd1;
    int cod2, qtd2;
    float valor1, valor2, soma1, soma2, total;
    
    printf("Digite o código da peca 1: ");
    scanf("%d", &cod1);
    
    printf("Digite a quantidade de pecas: ");
    scanf("%d", &qtd1);
    
    printf("Digite o valor unitario da peca:");
    scanf("%f", &valor1);
    
    printf("--------------------------------------\n");
    
    printf("Digite o código da peca 2: ");
    scanf("%d", &cod2);
    
    printf("Digite a quantidade de pecas: ");
    scanf("%d", &qtd2);
    
    printf("Digite o valor unitario da peca:");
    scanf("%f", &valor2);
    
    soma1 = valor1 * qtd1;
    soma2 = valor2 * qtd2;
    
    total = soma1 + soma2;
    
    printf("--------------------------------------\n");
    
    printf("VALOR A PAGAR: R$ %.2f ", total);

    
}