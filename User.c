#include "../include/users.h"


void login (){  // Fonction pour le login de l'utilisateur 
  utilisateur usa;  
FILE *Userr= fopen("../data/users.cvs","r");
if(Userr == NULL){
  printf("Ereur dans l'ouverture du fichier de stockage d'utilisateur:");
exit(1);
}
printf("Entrez votre Nom et mot de passe :\n");
gets(usa.nom_utilisateur);
gets(usa.password);
fputs(usa.nom_utilisateur,Userr);
fputs(usa.password,Userr);
fprintf(Userr,"\n______________\n");

fclose(Userr);
}

void isuserexist() { //Fonction that make sure that user information exist in the file
utilisateur usa;

FILE *Userr=fopen("../data/users.cvs","r");
if(Userr == NULL){
  printf("Ereur dans l'ouverture du fichier de stockage d'utilisateur:");
exit(1);
}

  char line[max * 2]; // To store a line from the file
    while (fgets(line, sizeof(line), Userr)) {
        // Extract username and password from the line
        char stored_username[max], stored_password[max];
        sscanf(line, "%s", stored_username, stored_password);

        // Compare with the provided username and password
        if (strcmp(stored_username,usa.nom_utilisateur) == 0 && strcmp(stored_password,usa.password) == 0) {
            fclose(Userr);
            printf("User exist"); // User exists
        }
        else {
          utilisateur new;
          printf("User n'existe pas :\n");
printf("Entrez votre informations nom et mot de pass \n");
gets(new.nom_utilisateur);
gets(new.password); 
        }
    }
}
void addusertofile () {  //Fonction to add the new  user information to the file
  utilisateur new;
FILE *Userr= fopen("../data/users.cvs","r");
if(Userr == NULL){
  printf("Ereur dans l'ouverture du fichier de stockage d'utilisateur:");
exit(1);
} else{
  fputs(new.nom_utilisateur,Userr);
  fputs(new.password,Userr);
} 
fclose(Userr);
}
