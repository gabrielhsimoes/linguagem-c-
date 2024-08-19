/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int cod, digitador=1, qtd;
    float valor, total;

    
    while(digitador==1){
    
    printf("######## TABELA DE PRECOS #########\n\n");
    
    printf("CODIGO --- ESPECIFICACAO --- PRECO\n\n");
    
    printf(" 1 --- Cachorro quente --- R$ 4.00\n");
    printf(" 2 --- X-Salada        --- R$ 4.50\n");
    printf(" 3 --- X-Bacon         --- R$ 5.00\n");
    printf(" 4 --- Torrada simples --- R$ 2.00\n");
    printf(" 5 --- Refrigerante    --- R$ 1.50\n");


    printf("\nDigite o codigo do item a ser comprado: ");
    scanf("%d", &cod);
    
    if(cod == 1){
        valor += 4.00;
        
    } else if (cod == 2){
        valor += 4.50;
    
    } else if (cod == 3){
        valor += 5.00;
        
    } else if (cod == 4){
        valor += 2.00;
        
    }else if(cod == 5){
        valor += 1.50;
    }
    
    printf("\nDigite a quantidade do item: ");
    scanf("%d", &qtd);
    
    total = qtd * valor;
    
    printf("\nValor da compra: %.2f", total);
    
    printf("\nDeseja finalizar? Digite 0 para finalizar compra ou 1 para continuar!");
    scanf("%d", &digitador);
    
    }
    
    printf("Total: %.2f", total);

}