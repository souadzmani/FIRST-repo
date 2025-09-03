#include <stdio.h>
#include <stdlib.h>
int main() {
    int a , b , r1,r2, r3 ,r4;

    printf("entrer la premier nombre: ");
    scanf("%d",&a);
    printf("entrer la deuxieme nombre: ");
    scanf("%d",&b);

    r1= a+b;
    r2= a*b;
    r3= a/b;
    r4= a-b;

    printf("la somme est:%d\n",r1);
    printf("la produit est:%d\n",r2);
    printf("la devision est:%d\n",r3);
    printf("la sustraction est:%d\n",r4);









	return 0;
}
