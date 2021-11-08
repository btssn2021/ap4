#include <stdio.h>
#include <stdbool.h>

int main() {
    /************************menu************************/
    int saisie=0;
    float montant,solde=0;
    while(true) {
        printf("\n1-créditer\n");
        printf("2-débiter\n");
        printf("Votre choix?");
        scanf("%d", &saisie);
        /*******************debit credit**********************/
        switch (saisie) {


            case 1:
                printf("De quel montant voulez créditer?");
                scanf("%f", &montant);
                solde += montant;
                printf("\nVous avez crédité votre compte de %0.2f euros", montant);
                break;


            case 2:
                printf("De quel montant voulez débiter?");
                scanf("%f", &montant);
                if ((solde - montant) < 0) {
                    printf("Solde insuffisant");
                } else {
                    solde -= montant;
                    printf("\nVous avez débité votre compte de %0.2f euros", montant);
                }
                break;

            default:
                printf("Saisie incorrecte veuillez recommencer");
                scanf("%*[^\n]"); //vide le scanf
                break;

        }

        printf("\nVotre solde est %0.2f euros", solde);
    }
    return 0;
}
