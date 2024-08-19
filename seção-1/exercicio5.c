/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;
    
    while(senha!=2002){
        
    printf("\nDigite a senha válida para entrar: ");
    scanf("%d", &senha);
    
    if(senha!=2002){
        printf("\nSenha Invalida");
    }else{
        printf("\nAcesso Permitido");
    }

    }
}