#ifndef STOCK_H
#define STOCK_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10000



typedef struct {
  int jour;
  int mois; 
  int annee;
} date;

typedef struct {  // Structure pour les informations du produit 
int Id;
char Nom_product[max];
char Description[max];
char Nom_user[max];
float Prix;
int Quantite_en_stock;
int Seuil_alert_en_stock;
date Date_drnier_entree_en_stock;
date Date_dernier_sortir_en_stock;
} Product;

void add_product();
void edit_product();
void recherche_produit();
void afficher_liste_produit ();
void Tri_produit();
void removeProductByName();

#endif
