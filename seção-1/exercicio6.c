/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int N, i, X, somIn, somOut;
    
    printf("Digite a quantidade de vezes que o numero vai se digitado: ");
    scanf("%d", &N);
    
    for(i=0;i<N;i++){
        
        printf("Digite um numero: ");
        scanf("%d", &X);
        
        if(X >= 10 && X <=20){
            somIn = somIn +1;
        } else{
            somOut = somOut + 1;
        }
    }
    
    printf("%d in", somIn);
    printf("\n%d out", somOut);
}