#include <stdio.h>
#include "player.h" // <-- Va servir à utiliser les fonctions, définis dans un autre fichier, ici

int main() {

    /*
        En incluant les fichiers .c et .h on va pouvoir uttiliser les fonctions déjà déclarées dans un autre fichier.
        C'est déjà le cas avec le : #include <stdio.h>. On utilise des fonctions externes que nous n'avons
        pas besoin de réecrire pour pouvoir les utiliser.
        Ainsi, si on a besoin d'une fonction dans plusieurs fichiers, inutile de la déclarer à chaque fois.
        Il y à juste à inclure le fichier qui détient la fonction et l'utiliser où on le souhaite.
    */

    // Déclaration d'un int
    int niveauJoueur = 15;

    // Utilisation des fonctions définis dans les autres fichiers (player.c et player.h)

    printf("Niveau du joueur avant le reset: %d\n", niveauJoueur);

    // Reset du niveau grâce à la fonction resetLevel() déclarée dans un autre fichier
    niveauJoueur = resetLevel();
    printf("Niveau du joueur apres le reset: %d\n", niveauJoueur);

    // Mettre le niveau du joueur à 2
    niveauJoueur = setLevel();
    printf("Le niveau du joueur a ete change pour: %d\n", niveauJoueur);

    // Augmenter le niveau du joueur de 2 jusqu'à ce que celui-ci soit plus petit ou égal à 6
    for (niveauJoueur = 0; niveauJoueur <= 6; niveauJoueur++) {
        niveauJoueur = upLevel();
        printf("Le niveau du joueur a augmente: %d\n", niveauJoueur);
    }

    return 0;
}