#include <stdio.h> // <-- <> sont utilisés pour des fichiers externes du projet
#include "player.h" // <-- "" sont utilisés pour des fichiers internes du projet 

/*
    Le fichier .c est sert à l'implémentation des fonctions déclarées dans le fichier .h
*/


// Développement de la fonction hello() déclarée dans le fichier .h
void hello(void) {
    printf("Hello\n");
}


// Développement du int resetLevel() déclarée dans le fichier .h
int resetLevel(void) {
    int level;
    level = 0;
    return 0;
}


// A chaque fois que cette fonction est appelée, le niveau du joueur sera remis à 2
int setLevel(void) {
    int niveau = 0;
    niveau += 2;
    return niveau;
}


// A l'inverse de la fonction setLevel(), cette fonction ajoutera 2 au niveau actuel. Grâce au mot static la valeure est conservée
int upLevel(void) {
    static int niveau = 0;
    niveau += 2;
    return niveau;
}