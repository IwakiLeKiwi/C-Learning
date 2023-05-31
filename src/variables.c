#include <stdio.h>

int main() {

    /*
        %d : nombre entier (int)
        %f : nombre flottant (float)
        %c : caractère (char)
        %s : chaîne de caratère (texte)

        /!\ % + <.(nombre)> + f = nombre de chiffres affichés après la virgule
        Ex:
            printf("Le nombre est de %.2f euros\n", prix);
                                       ^
            chiffre afficher : 178.25

            printf("Le nombre est de %.5f euros\n", prix);
                                       ^
            chiffre afficher : 178.25000

        \n : retour à la ligne
    */

    /*
    Déclaration et affectation d'un variable de type entier (int)
    Utilisation avec int
    */
    int number = 45;
    int apple = 16;

    printf("Les nombres sont : %d et %d\n", number, apple);

    /* 
    Déclaration et affectation d'un variable de type flottant (float)
    Utilisation avec float
    */ 
    float prix = 178.25;

    printf("Le prix est de %.2f euros\n", prix);

    /* 
    Déclaration et affectation d'un variable de type flottant (float)
    Utilisation avec float de type constant (const)

    Nom en const sont souvent en majuscule pour les différentier 
    Ex: const float PI = 3.14;
                    ^

    const ne pas pas être changé plus tard dans le programme, c'est une variable constante
    */
    const float PI = 3.14;

    printf("PI %.2f\n", PI);

    /*
    Types : register -> variable qui passe dans les registres
            volatile -> variable qui NE passe PAS dans les registres

    Utilisés dans les vieux programmes
    Sont actuellement inutiles mais existent (why not?)
    */
    register int x = 5;
    volatile int y = 10;

    return 0;
}