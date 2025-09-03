#include <stdio.h>
#include <stdlib.h>
int main() {
    float n1, n2, n3;
    float moyenne;
  

    printf("Entrer la premier nombre : ");
    scanf("%f", &n1);

    printf("Entrer le deuxieme nombre : ");
    scanf("%f", &n2);

    printf("Entrer le troisieme nombre : ");
    scanf("%f", &n3);
    moyenne=(n1*2+n2*3+n3*5)/10;

    printf(" la moyenne pondérée de trois nombres est: %f ",moyenne);

	return 0;
}






