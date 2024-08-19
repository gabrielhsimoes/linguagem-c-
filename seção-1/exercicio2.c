/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {

    double raio, area, pi;
    
    pi=3.14159;
    
    /* O uso do double foi necessário para poder retornar o resultado mais preciso, enquanto o float não tava atendendo a necessidade */

    printf("Digite o valor do raio de um circulo: ");
    scanf("%lf", &raio);
    
    area = pi * (raio * raio);

    
    printf("\nA= %.4lf", area);
}