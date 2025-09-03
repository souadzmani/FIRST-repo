#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

    float a, b, c, m;

    printf("Entrer la premier nombre :");
    scanf("%f",&a);

    printf("Entrer le deuxieme nombre :");
    scanf("%f",&b);

    printf("Entrer le troisieme nombre :");
    scanf("%f",&c);
    m=pow(a*b*c,1/3);
    printf("la moyenne géométrique est:%f",m);

}