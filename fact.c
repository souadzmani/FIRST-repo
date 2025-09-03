#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i=0,fac=1;   
printf("entrer un nombre:");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    fac=fac*i;
    
}
printf("la factorieele est:%d",fac);



    
   




	return 0;
}