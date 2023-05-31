#include <stdio.h>

int main() {

    /*
        maVariable  : contenu de la variable (ex: maVariable = 15)
        &maVariable : adresse où est stokée la variable
    */

    // Utilisation avec un chiffre
    int age = 0;

    // Demander l'âge à l'utilisateur
    printf("Quel age avez-vous ? ");
    // Stocké la valeure de la variable entrée par l'utilisateur
    scanf("%d", &age);

    // Afficher la valeure de la variable rensegnée par l'utisateur
    printf("Vous avez %d ans.\n", age);

    /*
        ↑
        Ou        
        ↓
    */

    // Utilisation avec une lettre
    signed char letter = 'A';

    // Demander la lettre à l'utilisateur
    printf("Entrez une lettre : ");
    // Stocké la valeure de la variable entrée par l'utilisateur
    scanf("%c", &letter);

    // Afficher la valeure de la variable rensegnée par l'utisateur
    printf("Lettre choisie -> ", letter);
    
    return 0;
}