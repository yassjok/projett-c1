#include "../include/utils.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000

int main() {
   
    login();
    isuerexist () ;
    addusertofile();

    int choix;
    char deuxiem_choix[MAX]; // Variable for user's choice to repeat
    do { // repete ca jusqua l'utilisateur quitte 
        printf("Bonjour! Veuillez choisir l'option qui vous convient :\n");
        printf("1. Ajouter un produit\n");
        printf("2. Modifier un produit\n");
        printf("3. Afficher la liste des produits\n");
        printf("4. Rechercher un produit\n");
        printf("5. Trier par nom utilisateur et prix\n");
        printf("6. Supprimer un produit\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        // choisir la fonction a traiter en se basant sur le choix de l'utilisateur
        switch (choix) {
            case 1: 
                add_product();
                break;
            case 2: 
                edit_product();
                break;
            case 3: 
                afficher_liste_produit();
                break;
            case 4: 
                recherche_produit();
                break;
            case 5: 
                Tri_produit();
                break;
            case 6: 
                removeProductByName();
                break;
            default: // si l'utilisateur entre un nombre different de 1 jusqu'a 6 
                printf("Choix invalide. Veuillez réessayer.\n"); // le programme affiche ca 
                continue;
        }

        // s il veut rechoisir depuis le debut 
        printf("Voulez-vous refaire un choix ? (yes or no) : ");
        scanf("%s", deuxiem_choix);

    } while (strcmp(deuxiem_choix, "yes") == 0 || strcmp(deuxiem_choix, "YES") == 0); 
        // si il entre no le programe s'arrette 
    printf("Au revoir!\n");
    return 0;
}
