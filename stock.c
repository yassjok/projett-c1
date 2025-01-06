#include "../include/stock.h"

void add_product() {
Product pr;
FILE * produit = fopen ("../data/stock/products.csv","r"); // Fichier pour stocker les informations du produit 
if(produit == NULL){
printf("Ereur dans l'ouverture du fichier product");
exit(1);
}
//Demande de saidir les informations du produit
printf("\n Entrez Id du produit:");
scanf("%d",&pr.Id);
printf("\n Entrez le nom du produit:");
gets(pr.Nom_product);
printf("\n Entrez la description du produit:");
gets(pr.Description);
printf("\n Entrez le nom d'utilisateur  du produit:");
gets(pr.Nom_user);
printf("\n Entrez le prix du produit:");
scanf("%.3f",&pr.Prix);
printf("\n Entrez la quantite du produit :");
scanf("%d",&pr.Quantite_en_stock);
printf("\n Entrez le seuil d'alerte en stock du produit:");
scanf("%d",&pr.Seuil_alert_en_stock);
printf("\n Entrez le dernier date de l'entree en stock du produit :");
scanf("%d%d%d",&pr.Date_drnier_entree_en_stock.jour,& pr.Date_drnier_entree_en_stock.mois,& pr.Date_drnier_entree_en_stock.annee);
printf("\n Entrez le dernier date de sortie en stock du produit :");
scanf("%d%d%d",&pr.Date_dernier_sortir_en_stock.jour,& pr.Date_dernier_sortir_en_stock.mois,& pr.Date_dernier_sortir_en_stock.annee);

//Fonction pour stocker les donnes du produit dans le fichier 
fprintf(produit,"%d",pr.Id);
fprintf(produit,"\n");
fputs(pr.Nom_product,produit);
fprintf(produit,"\n");
fputs(pr.Description,produit);
fprintf(produit,"\n");
fputs(pr.Nom_user,produit);
fprintf(produit,"\n");
fprintf(produit,"%.3f\n%d\n%d",pr.Prix,pr.Quantite_en_stock,pr.Seuil_alert_en_stock);
fprintf(produit,"%d/%d/%d",pr.Date_drnier_entree_en_stock.jour,pr.Date_drnier_entree_en_stock.mois,pr.Date_drnier_entree_en_stock.annee);
fprintf(produit,"%d/%d/%d",pr.Date_dernier_sortir_en_stock.jour,pr.Date_dernier_sortir_en_stock.mois,pr.Date_dernier_sortir_en_stock.annee);


fclose(produit);

}
void edit_product(){ // fonction pour modifier le produit
FILE * produit = fopen ("../data/stock/products.csv","r");
if(produit == NULL){
printf("Ereur dans l'ouverture du fichier product: \n");
exit(1);
}
  Product pr;
char nom_produit_modifie[max];
char elements[max];
int  nbr_elements_modifies;// Varibles pour savoir les elements a modifies 
printf("Pouvez vous saisir le nom du produit a modifier:\n");
gets(nom_produit_modifie);
 // demamnder a l'ulisateur de choisir qu'est ce qu'il veut modifier dans le produit
 //l'Id ou le prix...
printf("Voulez vous modifier un ou plisieurs elements  (Entrez 1 ou un autre nombre ) :\n");
scanf("%d",&nbr_elements_modifies); 
if(nbr_elements_modifies==1){ // si il veut modifier juste u seule elements
printf("Entrez l'elements que vous voulez modifies dans le produit:\n");
gets(elements);
if(elements=="Id"|| elements == "id"){
  printf("Entrez le nouvaux Id");
  scanf("%d",&pr.Id);
}
if(elements=="Nom product" || elements == "nom produit"){ // l'utlisateurs entre les nouvelles information et on le stock dans le fichier
  printf("Entrez le nouvaux nom du product:\n");
  gets(pr.Nom_product);
  fprintf(produit,"%d",pr.Id);
  fputs(pr.Nom_product,produit);
}
if(elements== "Description" || elements== "description"){
printf("Entrez la nouvel description du produit :\n");
gets(pr.Description);
fputs(pr.Description,produit);

}
if(elements== "Nom user" || elements == "nom user"){
printf("Entrez le nouvau nom d'utilsateur :\n");
gets(pr.Nom_user);
fputs(pr.Nom_user,produit);
}
if( elements == "Prix" || elements == "prix"){
printf("Entrez le nouvau prix : \n");
scanf("%f",&pr.Prix);
fprintf(produit,"%f",pr.Prix);
}
if(elements=="Quantite" || elements =="quantite stock" ){
  printf("Entrez la nouvel quantite en stock :\n");
  scanf("%d",&pr.Quantite_en_stock);
  fprintf(produit,"%d",pr.Quantite_en_stock);
}
if(elements=="Seuil"|| elements=="seuil stock");{
printf("Entrez le suil d'alerte en stock :\n");
scanf("%d",&pr.Seuil_alert_en_stock);
fprintf(produit,"%d",pr.Seuil_alert_en_stock);
}
if(elements=="Date entree"|| elements == "date entree"){
  printf("Entrez la nouvelle date d'entree en stock :\n ");
  scanf("%d%d%d",&pr.Date_drnier_entree_en_stock.jour,& pr.Date_drnier_entree_en_stock.mois,& pr.Date_drnier_entree_en_stock.annee);
  fprintf(produit,"%d/%d/%d",pr.Date_drnier_entree_en_stock.jour,pr.Date_drnier_entree_en_stock.mois,pr.Date_drnier_entree_en_stock.annee);
}

if(elements== "Date sortie"|| elements =="date sortie"){
  printf("Entrez la nouvelle derniere date de sortir en stock \n :");
  scanf("%d%d%d",&pr.Date_dernier_sortir_en_stock.jour,& pr.Date_dernier_sortir_en_stock.mois,& pr.Date_dernier_sortir_en_stock.annee);
  fprintf(produit,"%d/%d/%d",pr.Date_dernier_sortir_en_stock.jour,pr.Date_dernier_sortir_en_stock.mois,pr.Date_dernier_sortir_en_stock.annee);

}
} else {// si l'utilisateur a entree un nombre different de 1 donc il veut mmodifier plusieur elements

printf("Pouvez vous entrez les nouvelles informations :\n");
printf("\n Entrez Id du produit:");
scanf("%d",&pr.Id);
printf("\n Entrez le nom du produit:");
gets(pr.Nom_product);
printf("\n Entrez la description du produit:");
gets(pr.Description);
printf("\n Entrez le nom d'utilisateur  du produit:");
gets(pr.Nom_user);
printf("\n Entrez le prix du produit:");
scanf("%.3f",&pr.Prix);
printf("\n Entrez la quantite du produit :");
scanf("%d",&pr.Quantite_en_stock);
printf("\n Entrez le seuil d'alerte en stock du produit:");
scanf("%d",&pr.Seuil_alert_en_stock);
printf("\n Entrez le dernier date de l'entree en stock du produit :");
scanf("%d%d%d",&pr.Date_drnier_entree_en_stock.jour,& pr.Date_drnier_entree_en_stock.mois,& pr.Date_drnier_entree_en_stock.annee);
printf("\n Entrez le dernier date de sortie en stock du produit :");
scanf("%d%d%d",&pr.Date_dernier_sortir_en_stock.jour,& pr.Date_dernier_sortir_en_stock.mois,& pr.Date_dernier_sortir_en_stock.annee);
//stockage de ces nouvaux donnes dans le fichier 

fprintf(produit,"%d",pr.Id);
fprintf(produit,"\n");
fputs(pr.Nom_product,produit);
fprintf(produit,"\n");
fputs(pr.Description,produit);
fprintf(produit,"\n");
fputs(pr.Nom_user,produit);
fprintf(produit,"\n");
fprintf(produit,"%.3f\n%d\n%d",pr.Prix,pr.Quantite_en_stock,pr.Seuil_alert_en_stock);
fprintf(produit,"%d/%d/%d",pr.Date_drnier_entree_en_stock.jour,pr.Date_drnier_entree_en_stock.mois,pr.Date_drnier_entree_en_stock.annee);
fprintf(produit,"%d/%d/%d",pr.Date_dernier_sortir_en_stock.jour,pr.Date_dernier_sortir_en_stock.mois,pr.Date_dernier_sortir_en_stock.annee);

}
fclose (produit);
}
 
  void afficher_liste_produit (){
    Product pr; // Fonction pour afficher touts les produits enregistrer 
  char tab[max];
  printf("Voici la liste des produits enregistres : \n");
FILE *produit= fopen("../data/stock/products.csv","r");
if(produit == NULL ){
  printf("Erreur dans l'ouverture du fichier :\n");
  exit(1);
}
fgets(tab,sizeof(tab),produit) ; // Boucle pour lire touts les donnes du fichier 
printf("Id du produit : %d \n ",pr.Id);
printf("Nom du produit: %s \n",pr.Nom_product);
printf("Description du produit: %s \n",pr.Description);
printf("Nom d'utilisateur: %s\n",pr.Nom_user);
printf("Le prix du produit : %.3f\n",pr.Prix);
printf("La quantite du produit :%d\n " ,pr.Quantite_en_stock );
printf("Le seuil d'alerte en stock du produit: %d \n ",pr.Seuil_alert_en_stock);
printf("La derniere date de l'entree en stock du produit : %d / %d/ %d \n",pr.Date_drnier_entree_en_stock.jour, pr.Date_drnier_entree_en_stock.mois,pr.Date_drnier_entree_en_stock.annee);
printf("La derniere date de sortie en stock du produit :%d / %d/ %d \n ",pr.Date_dernier_sortir_en_stock.jour, pr.Date_dernier_sortir_en_stock.mois, pr.Date_dernier_sortir_en_stock.annee);
printf("\n______________________________________________\n");

fclose(produit);
 }

void recherche_produit(){ //Fonction pour la recherche d'un produit saisie par l'utilisateur 
Product pr;
char Nom_prod_recherch[max] ,Nom_utilisateur_recherch_prd[max];
int chhoix_recherch; // variable our savoir comment l'ultuilisateur veut chercher le produit 
 char tab[max]; // tableau pour fgets
 // Variable pour stocker le nom du produit saise par l'utilisateur
  FILE * produit =fopen ("../data/stock/products.csv","r");
  s :printf("Voulez vous chercher un produit par : 1.Nom utilisateur \n 2.Nom du produit \n (saisie 1 ou 2)");
  scanf("%d",&chhoix_recherch); // s est pour goto
  if((chhoix_recherch!=1)  || (chhoix_recherch !=2 ) ){
    printf("Ereur de saisi resaisir");
    goto s ;
  }
  if(chhoix_recherch = 1){
    printf("Entrez le nom d'utilisateur du produit a rechercher \n ");
    gets(Nom_utilisateur_recherch_prd);
 fgets(tab,sizeof(tab),produit) ;
       if(pr.Nom_user == Nom_utilisateur_recherch_prd){
         printf(" \n Produit exist ");
         }
        else{
          printf(" \nProduit n'existe pas");
        }
      }
    
     else { 
  printf("Entrez le nom du produit a rechercher :");
  gets(Nom_prod_recherch);
fgets(tab,sizeof(tab),produit) ;
  if(pr.Nom_product==Nom_prod_recherch) {
  printf(" \n Produit existe ");
  } else { 
  printf(" \n Produit n'existe  pas");
  }
  
 // Boucle pour lire touts les donnes du fichier
 }
   fclose (produit);
  }
  

void Tri_Products() {  
    FILE * produit = fopen("../data/stock/products.csv", "r");
    if (produit == NULL){
        printf("Erreur d'ouverture du fichier \n");
        exit(1);
    }
    char lines[100][max];
    int count = 0;
    while (fgets(lines[count], sizeof(lines[count]), produit)) {
        count++; 
    }
    fclose(produit);

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(lines[j], lines[j + 1]) > 0) {
                char temp[max];
                strcpy(temp, lines[j]);
                strcpy(lines[j], lines[j + 1]);
                strcpy(lines[j + 1], temp);
            }
        }
    }
    produit = fopen("../data/stock/products.csv", "w");
    if (produit== NULL) {
        printf("Erreur d'ouverture du fichier pour écrire.\n");
        exit(1);
    }

    for (int i = 0; i < count; i++) {
        fputs(lines[i], produit);
    }

printf("Produits tries avec succes \n");
    fclose(produit);
}

void removeProductByName() {
    char productName[max]; // Nom du produit à supprimer
    printf("Entrez le nom du produit a supprimer :\n ");
    gets(productName);

    // File paths , solution trouver pour corriger le code 
    const char *originalFile = "../data/stock/products.csv";
    const char *tempFile = "temp.csv";

    // Ouvrir le fichier original nommé products.csv
    FILE *produit = fopen(originalFile, "r");
    if (produit == NULL) {
        perror("Erreur lors de l'ouverture du fichier original :");
        exit(1);
    }

    // Créer un fichier temporaire pour écrire les produits mis à jour
    FILE *temp = fopen(tempFile, "w");
    if (temp == NULL) {
        perror("Erreur lors de l'ouverture du fichier temporaire");
        fclose(produit);
        exit(1);
    }

    Product product; // Structure pour stocker chaque produit lu
    int found = 0;   // Indicateur pour vérifier si le produit à supprimer est trouvé

    // Lire chaque ligne du fichier `products.csv`
    while (fscanf(produit, "%d,%s,%s,%s,%f,%d,%d,%d/%d/%d,%d/%d/%d\n",
                  &product.Id, product.Nom_product, product.Description, 
                  product.Nom_user, &product.Prix, 
                  &product.Quantite_en_stock, &product.Seuil_alert_en_stock,
                  &product.Date_drnier_entree_en_stock.jour, 
                  &product.Date_drnier_entree_en_stock.mois, 
                  &product.Date_drnier_entree_en_stock.annee,
                  &product.Date_dernier_sortir_en_stock.jour, 
                  &product.Date_dernier_sortir_en_stock.mois, 
                  &product.Date_dernier_sortir_en_stock.annee) == 13) {
        // Vérifier si le nom du produit correspond à celui entré par l'utilisateur
        if (strcmp(product.Nom_product, productName) != 0) {
            // Si le produit ne correspond pas, l'écrire dans le fichier temporaire
            fprintf(temp, "%d,%s,%s,%s,%.2f,%d,%d,%d/%d/%d,%d/%d/%d\n",
                    product.Id, product.Nom_product, product.Description, 
                    product.Nom_user, product.Prix, 
                    product.Quantite_en_stock, product.Seuil_alert_en_stock,
                    product.Date_drnier_entree_en_stock.jour, 
                    product.Date_drnier_entree_en_stock.mois, 
                    product.Date_drnier_entree_en_stock.annee,
                    product.Date_dernier_sortir_en_stock.jour, 
                    product.Date_dernier_sortir_en_stock.mois, 
                    product.Date_dernier_sortir_en_stock.annee);
        } else {
            found = 1; // Produit trouvé et ignoré
        }
    }

    // Fermer les fichiers
    fclose(produit);
    fclose(temp);

    // Supprimer le fichier original
    if (remove(originalFile) != 0) {
       printf("Erreur lors de la suppression du fichier original");
        exit(1);
    }

    // Renommer le fichier temporaire en products.csv
    if (rename(tempFile, originalFile) != 0) {
        printf("Erreur lors du renommage du fichier temporaire");
        exit(1);
    }

    // Afficher le résultat à l'utilisateur
    if (found) {
        printf("Le produit '%s' a été supprimé avec succès.\n", productName);
    } else {
        printf("Aucun produit nommé '%s' n'a été trouvé.\n", productName);
    }
}
