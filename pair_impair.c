#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("entrer un nombre: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d est un nombre pair",n);
    }
    else {
        printf("%d est un nombre impair");
}
	return 0;
}
