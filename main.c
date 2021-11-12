#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
/****************************définition des protoypes de fonction***************************/
int menu();
void crediter(float);
void debiter(float);
void afficherSolde();
float saisirMontant();
float solde; //variable globale
int main() {
    while(true) {
        switch (menu()) {
            case 1:
                crediter(saisirMontant());
                break;
            case 2:
                debiter(saisirMontant());
                break;
            default:
                printf("Saisie invalide");


        }
        afficherSolde();
    }
}
    int menu ()
    {
        int saisie=0;
        printf("\n1-créditer\n");
        printf("2-débiter\n");
        printf("Votre choix?");
        scanf("%d", &saisie);
        return saisie;
    }

    void crediter(float montant)
    {
        solde += montant;
        printf("\nVous avez crédité votre compte de %0.2f euros", montant);
    }

    void debiter(float montant)
    {

        if ((solde - montant) < 0) {
            printf("Solde insuffisant");
        } else {
            solde -= montant;
            printf("\nVous avez débité votre compte de %0.2f euros", montant);
        }
    }

    void afficherSolde()
    {
        printf("\nVotre solde est %0.2f euros", solde);
    }

    float saisirMontant()
    {   float montant=0;
        printf("Veuillez saisir un montant");
        scanf("%f",&montant);
        return montant;
    }


