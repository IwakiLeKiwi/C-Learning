#include <stdio.h>

#define TAILLE_TAB 5

#define NOMBRE_LIGNES 3
#define NOMBRE_COLONNES 2

void afficher_tableau(int tab[], int taille);
int *creer_tableau(void);

int main() {

    /*
        [Déclaration tableau]
            <type> <nom_du_tableau>[X]; // Déclare avec des valeurs aléatoires

        [Initialisation]
            int tableau[5] = {valeur1, valeur2, valeur3, valeur4, valeur5};
            int tableau[5] = {0}; // Toutes les cases valent 0
            /!\ int tableau[5] = {4}; // Première case à 4, LE RESTE A 0 !

        [Accès au tableau]
            tableau[X] : élément d'indice X (X+1ème élément du tableau)

            tableau        : adresse du tableau
            *tableau       : premier élément du tableau
            *(tableau + X) : élément d'indice X

        (NOTES)
            tableau[5] même chose que --> *(tableau + 5)
    */

    // Déclaration et initialisation d'un tableau
    int tableau[TAILLE_TAB] = {16, 84, -2, 188, 3};
    int i;

    // Affichage du tableau initial avec la fonction afficher_tableau()
    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");

    // Modification d'un élément du tableau
    tableau[2] = -5;

    // Affichage du tableau après modification
    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");

    // Création et affichage d'un tableau dynamique
    int *tab = creer_tableau();

    afficher_tableau(tab, TAILLE_TAB);

    printf("\n\n");

    // Modification d'un élément du tableau dynamique
    tab[2] = -5;

    // Affichage du tableau dynamique après modification
    afficher_tableau(tab, TAILLE_TAB);

    printf("\n\n");

    // Utilisation d'un tableau multidimensionnel (damier)
    int a, b;

    int damier[NOMBRE_LIGNES][NOMBRE_COLONNES] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Parcours du tableau multidimensionnel et affichage des éléments
    for (a = 0; a < NOMBRE_LIGNES; a++)
        for (b = 0; b < NOMBRE_COLONNES; b++)
            printf("Element indice [%d][%d] = %d\n", a, b, damier[a][b]);

    /*  
        [REPRÉSENTATION DU TABLEAU DAMIER]

        Tableau damier avec les     Tableau damier avec la position
           valeurs rentrées               des valeurs

        |-------------|             |--------------------|
        |  1   |  2   |             |  0 ; 0  |  0 ; 1   |
        |------|------|             |---------|----------|
        |  3   |  4   |             |  1 ; 0  |  1 ; 1   |
        |------|------|             |---------|----------|
        |  5   |  6   |             |  2 ; 0  |  2 ; 1   |
        |-------------|             |---------|----------|

        Ex: Dans la case 0 ; 0 il y a la valeur 1
            dans la case 1 ; 0 il y a la valeur 3 
            etc...
    */   

    return 0;
}

/* ----------------------------------------------------- */

void afficher_tableau(int tab[], int taille) {
    int i;

    // Parcours du tableau et affichage des éléments
    for (i = 0 ; i < taille ; i++) {
        printf("[%d] ", tab[i]);
    }
}

int *creer_tableau(void) {
    static int tableau_entiers[5];
    int i;

    // Initialisation du tableau dynamique avec des valeurs spécifiques
    for (i = 0; i < 5; i++)
        tableau_entiers[i] = i * 3; 

    return tableau_entiers;
}