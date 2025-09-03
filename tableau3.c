#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int prix[5];
    char titre[5][25];
    char auteur[5][25];
    int quantite[5];
    int numbre_livres = 0;
    int choix = 0;

    while (choix != 7)
    {

        printf("\n========MENU========\n");

        printf("1.Ajouter un livre au stock.\n");
        printf("2.Afficher tous les livres disponibles.\n");
        printf("3.Rechercher un livre par son titre.\n");
        printf("4.Mettre à jour la quantité d'un livre.\n");
        printf("5.Supprimer un livre du stock.\n");
        printf("6.Afficher le nombre total de livres en stock.\n");
        printf("choisir un nombre: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
        {
            printf("Titre du livre: ");
            scanf("%s", &titre[numbre_livres]);

            printf("Auteur du livre:");
            scanf("%s", &auteur[numbre_livres]);

            printf("prix du livre: ");
            scanf("%d", &prix[numbre_livres]);

            printf("quantite du livre: ");
            scanf("%d", &quantite[numbre_livres]);

            numbre_livres++;
            break;
        }
        case 2:
        {

            if (numbre_livres == 0)
            {
                printf("aucun livre est disponsable!");
            }
            else
                for (int i = 0; i < numbre_livres; i++)
                {
                    printf("les livres disponsables sont:\n titre:%s \n auteur:%s \n prix:%d \nquantite:%d \n ", titre[i], auteur[i], prix[i], quantite[i]);
                }
            break;
        }
        case 3:
        {
            char recherch[20];
            int trouve = 0;

            printf("entrer le nom de livre a recherche: ");
            scanf("%s", recherch);
            for (int i = 0; i < numbre_livres; i++)
            {
                if (strcmp(titre[i], recherch) == 0)
                {
                    printf("Livre a trouve: %s | Auteur: %s | Prix: %d | Quantite: %d\n", titre[i], auteur[i], prix[i], quantite[i]);
                    trouve = 1;

                    break;
                }
            }
            if (trouve == 0)
            {
                printf("livre introuvable!");
            }

            break;
        }

        case 4:
        {

            char recherch[20];
            int nouvelle_quantite;
            int trouve = 0;
            printf("entrer le titre de livre: ");
            scanf("%s", &recherch);
            for (int i = 0; i < numbre_livres; i++)
            {

                if (strcmp(titre[i], recherch) == 0)
                {
                    printf("entrer nouvelle quantite:");
                    scanf("%d", nouvelle_quantite);
                    quantite[i] = nouvelle_quantite;
                    printf("quantite mise a jour!");
                    trouve == 1;

                    break;
                }
            }
            if (trouve == 0)
            {
                printf("livre introuvable!");
            }
        }
        case 5:
        {
            char recherch[20];
            int trouve = 0;

            printf("entrer le nom de livre a supprimer: ");
            scanf("%s", &recherch);
            for (int i = 0; i < numbre_livres; i++)
            {

                if (strcmp(titre[i], recherch) == 0)
                {
                    for (int r = i; r < numbre_livres - 1; r++)
                    {

                        strcpy(titre[i], titre[r + 1]);
                        strcpy(auteur[r], auteur[r + 1]);
                        prix[r] = prix[r + 1];
                        quantite[r] = quantite[r + 1];
                    }
                    numbre_livres--;
                    printf("livre supprime avec succes\n");
                    trouve = 1;
                    break;
                }
            }
            if (trouve == 0)
            {
                printf("livre introuvable!");
            }
        }
        break;

        case 6:
        {
            int total = 0;
            for (int i = 0; i < numbre_livres; i++)
            {
                total += quantite[i];
            }
            printf("nombre de livres en stock: %d ", total);
            break;
        }

        default:
            printf("choix invalid! \n");
        }
    }

    return 0;
}
