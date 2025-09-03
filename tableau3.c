#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    int prix[5];
    char titre[5][25];
    char auteur[5][25];
    int quantite[10];
    int numbre_livres=0;
    int choix;
    int indice=0;
    char re[12];
    bool exist;

    while (choix!=7)
    {


    printf("1.Ajouter un livre au stock.\n");
    printf("2.Afficher tous les livres disponibles.\n");
    printf("3.Rechercher un livre par son titre.\n");
    printf("4.Mettre à jour la quantité d'un livre.\n");
    printf("5.Supprimer un livre du stock.\n");
    printf("6.Afficher le nombre total de livres en stock.\n");
    printf("choisir un nombre: ");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        printf("Titre du livr:.");
        scanf("%s",&titre[indice]);

        printf("Auteur du livre:");
        scanf("%s",&auteur[indice]);

        printf("prix du livre:");
        scanf("%s",& prix[indice]);

        printf("quantite du livre:");
        scanf("%s",& quantite[indice]);

        indice++;
        numbre_livres++;
        break;
    case 2:
        printf(" les livres disponsabeles sont:\n");
        if (numbre_livres==0)
        {
            printf("aucun livre est disponsable!");
        }
        else
        for (int i=0; i<=indice ; i++)
        {
        printf("les livres disponsables sont: titre:%s \n auteur:%s \n prix:%d \nquantite:%d \n ",titre[i],auteur[i],prix[i],quantite[i]);
        }
        break;
    case 3: 
        printf("entrer le titre en recherche")
        scanf("%s",&re);
        exist=false;
        for ( i = 0; i < indice; i++)
        {
            if (strmpc(re,titre[indice]==0))
            {
                printf("il exist");
                break;
                exist=true;
            }
            if (exist==false)
            {
               printf("il n' exist pas"); 
            }
            break;
        }
        
         



         
         


        

        

    

    
    }

    }



   

    
   




	return 0;
}