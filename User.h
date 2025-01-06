#ifndef USER_H
#define USER_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100

typedef struct {   // Structure pour les informations d'utilisateur
char nom_utilisateur[max];
char password[max];

}utilisateur;

void login();
void isuerexist();
void addusertofile();


#endif
