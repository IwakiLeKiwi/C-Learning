#include <stdio.h>

int main() {

    /*
        Les boucles vont permettent des répéter une action plusieurs fois
        facilement à la place de répéter une ligne

        Utilisations:
            Boucles infinis:
                while(<conditions>) {

                }

            Boucles avec condition d'arrêt
                while(i < 20) {

                    i++; // Répétition jusqu'à ce que i soit plus grand que 20
                }



        La boucle va s'executer jusqu'à ce que v soit plus grand que 5
        Si v est déjà plus grand que 5 la boucle va s'executer une fois puis va tester
        la valeure de v grâce au while ()

        int v = 6;

        do {
            printf("Valeure v : %d!\n", v);
            v++;
        } while (v < 5);


        Boucles for:
            int u;

            for (1 ; 2 ; 3) {
                printf("Valeure de u : %d\n", u);
            }
        
        3 étapes: 1 ; 2 ; 3

        1 -> initialisation de la variable

        for (u = 0 ; 2 ; 3) {

        }

        2 -> condition (comme le while())

        for (u = 0 ; u < 5 ; 3) {

        }

        3 -> se qui se passe (u++ -> ajout de 1 à la valeure u)

        for (u = 0 ; u < 5 ; u++) {

        }
    */

    // /!\ Ex. à ne pas faire
    printf("Hello world!\n");
    printf("Hello world!\n");
    printf("Hello world!\n");
    printf("Hello world!\n");
    printf("Hello world!\n");
    printf("Hello world!\n");


    // Utilisation des boucles
    int i = 0;

    // Traduis par: temps que <variables> <opérateur> <conditions>
    // Ex: temps que i est < (plus petit que) 20 alors 
    while (i < 20) { 
        printf("Valeure i : %d!\n", i);
        // i ne sera jamais plus grand que 20
    }


    // Utilisation des boucles avec condition d'arrêt
    int t = 0;

    // La boucle va s'executer jusqu'à ce que t plus grand que 20
    // Si t est déjà plus grand que 20 alors rien ne se passe
    while (t < 20) { 
        printf("Valeure de t : %d!\n", t);
        t++;
    }


    // La boucle va s'executer jusqu'à ce que v plus grand que 5
    // Si v est déjà plus grand que 5 la boucle va s'executer une fois puis va tester
    // la valeure de v grâce au while ()
    int v = 1;

    do {
        printf("Valeure de v : %d!\n", v);
        v++;
    } while (v < 5);


    // Boucles for
    int u;

    for (u = 0 ; u < 5 ; u++) { // si u++ --> u+1 cela devient une boucle infini
        printf("Valeure de u : %d\n", u);
    }
    

    return 0;
}