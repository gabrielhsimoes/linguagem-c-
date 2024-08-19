/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double a, b, c, delta=0, x1=0, x2=0, raiz;
    
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    
    printf("Digite o valor de C: ");
    scanf("%lf", &c);
    
    if(a==0){
        printf("Impossivel calcular");
        return 0;
    } 
    
    delta = (b * b) - (4 * a * c);
    
    if(delta<0){
        printf("Impossivel calcular");
         return 0;
    }
    
    //printf("delta: %lf", delta);
    
    raiz = sqrt(delta);
    
    //printf("%lf\n", raiz);
    
    x1 = (- b + raiz) / (2 * a);
    x2 = (- b - raiz) / (2 * a);
    
    printf("X1 = %.5lf", x1);
    printf("\nX2 = %.5lf", x2);
    
    
}