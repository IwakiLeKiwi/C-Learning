#include <stdio.h>

// Création d'une fonction ( /!\ déclaration avant la fonction main() )
int init_ball(int posX) {
    posX = 150;
    return posX;
}

// Ou déclarer la fonction
int banana(int);

void hello(void) {
    printf("Hello\n");
}

int main() {

    /*
        Exemples de fonctions:
            - printf()
            - scanf()
    */

    // Début d'une partie
    int balleX;

    balleX = init_ball(balleX);
    printf("Avant la partie : %d\n", balleX);

    // Déroulement de la partie

    // Relancement d'une partie
    balleX = init_ball(balleX);
    printf("Apres la partie : %d\n", balleX);

    // Appel de la fonction hello
    hello();

    return 0;
}

// Donner une valeure à la fonction banana
int banana(int banana) {
    banana = 15;
    return banana;
}