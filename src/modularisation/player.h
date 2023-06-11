#ifndef PLAYER_H // Si la constant PLAYER_H n'est pas défini
#define PLAYER_H // Alors je l'a défini

/*
    Le fichier .h est la déclaration des "prototypes" des fonctions
    On va déclarer une fonction et ensuite lui dire ce qu'elle doit faire dans le fichier .c
*/

void hello(void); // <-- Déclaration d'une fonction (cours en ressources)
int resetLevel(void);
int setLevel(void);
int upLevel(void);

#endif

// #ifndef, #define, #endif permetent de dire que si le fichier pplayer.h à déjà été inclu alors pas besoin de le réinclure