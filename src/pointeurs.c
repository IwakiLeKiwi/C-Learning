#include <stdio.h>

void inverser_nombres(int *nombreA, int *nombreB) {
    int temporaire = 0; // Déclaration d'une variable temporaire

    temporaire = *nombreB; // temporaire vaut désormais nombreB
    *nombreB = *nombreA; // nombreB vaut nombreA
    *nombreA = temporaire; // nombreA vaut temporaire où la valeur de nombreB à été stokée 
}

void incrementer(int *nombre) {
    while (*nombre < 5) {
        (*nombre)++;
    }   
}

int main() {

    /*
        Pointeur: variable contenant l'adresse d'une autre variable

        Adresse d'une variable: l'adresse d'une variable fait référence à l'emplacement 
        mémoire où cette variable est stockée.
        Chaque variable a une adresse unique qui peut être utilisée pour y accéder et la manipuler.

        %p -> affiche une adresse de variable ou pointeur

        [VARIABLES]
            maVariable  : valeur de la variable
            &maVariable : adresse de la variables

        [POINTEURS]

            Lorsqu'on déclare un pointeur, on utilise l'opérateur * pour indiquer que la variable est un pointeur.
            Par exemple : int *pointeurSurNombreA;

            *monPointeur = NULL ou *monPointeur = &maVariable
            (déclaration et initialisation d'un pointeur)

            monPointeur  : adresse de la variable pointée
            *monPointeur : valeur de la variable pointée
            &monPointeur : adresse du pointeur
    */

    int nombreA = 15;
    int nombreB = 28;

    int banana = 1;
    int *pointeurSurBanana = &banana;

    int *pointeurSurNombreA = &nombreA;
    /*  ^                     ^
     Déclaration du pointeur  Initialisation du pointeur
       pointeurSurNombreA       pointeurSurNombreA

        /!\ On dit simplement que la valeur de la variable pointée grâce à *, qui
        est nombreA et qui vaut 15, est égal à l'adresse où la variable est sockée.

        Adresse d'une variable: &maVariable

        Ainsi la valeur de la variable peut être récupérée partout en utilisant
        juste le nom du pointeur déclaré. 

                        /!\ /!\ Il ne faut pas remettre * devant !!

        Rappel: monPointeur  : adresse de la variable pointée
    */
    int *pointeurSurNombreB = &nombreB;


    // Utilisattion du %p pour afficher l'adresse de la variable ou pointeur
    printf("Adresse nombreA : %p\n", &nombreA);


    printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);

    inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);
    /*               \_________________  _________________/       
                                       \/
            Pas besoin de * car l'adresse de la variable pointée est le nom tout cours

        inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);
        = 
        inverser_nombres(&nombreA, &nombreB);
    */

    printf("APRES : A = %d et B = %d\n", nombreA, nombreB);



    printf("J ai %d banane\n", banana);

    incrementer(pointeurSurBanana);

    printf("J ai maintenant %d bananes\n", banana);

    return 0;

    /*
        Pour mieux comprendre, voici un exemple concret :

        Supposons que tu aies deux variables, a et b. Un pointeur peut être utilisé pour stocker l'adresse
        de a ou de b. Cela signifie que tu peux accéder à la valeur de a ou de b en utilisant le pointeur correspondant.
        De plus, tu peux même modifier la valeur de a ou de b à travers le pointeur.

        En résumé, les pointeurs te permettent d'accéder et de manipuler des variables en utilisant 
        leurs adresses, offrant ainsi une plus grande flexibilité et efficacité dans la programmation.
    */
}