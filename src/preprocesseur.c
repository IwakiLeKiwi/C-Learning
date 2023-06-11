#include <stdio.h>

// Préprocesseur
#define TVA 20 // <-- Définir une constante 
#define LONGUEUR 15
#define LARGEUR 35
#define AIRE (LONGUEUR * LARGEUR) // AIRE est un nombre entier (int) donc on l'affiche avec: %d
#define log printf // <-- log correspond à printf(). A chaque fois que le programme va rencontrer ce mot il le remplacera par printf()

int main() {

    /*
        Constantes prédéfinies en language C :

            __FILE__ (nom du fichier)
            __LINE__ (ligne du fichier)
            __DATE__ (date de compilation)
            __TIME__ (heure de compilation)
    */

    int prixHT = 15;
    int prixTTC = 0;

    prixTTC = prixHT + (prixHT * TVA / 100);
    log("Prix TTC : %d euros\n", prixTTC);

    log("%d cm2\n", AIRE);

    log("Nom du fichier: %s\n", __FILE__);

    return 0;
}