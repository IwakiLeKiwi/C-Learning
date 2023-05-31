#include <stdio.h>

int main() {

    /*
        == : égal à
        != : différent de
        <  : plus petit que
        >  : plus grand que
        <= : plus petit ou égal à
        >= : plus grand ou égal à

        && : et
        || : ou
        !  : ne pas
    */


    // Utilisation avec des if() avec une seul condition
    int age = 10;

    if (age < 1) { // si l'âge est plus petit que 1
        printf("Tu n'es pas ne.\n");
    } else if (age == 10) { // si l'âge vaut 10
        printf("Tu n'es pas ne.\n");
    } else { // si l'âge ne rentre dans aucun des deux cas précédent
        printf("Tu n'es pas ne.\n");
    }


    // Utilisation avec des if() avec plusieurs conditions
    int money = 10;

    if (money < 1) { // si l'argent est plus petit que 1
        printf("Tu n'as pas d'argent.\n");
    } else if (money >= 1 && money <= 100) { // si l'argent est compris entre 1 et 100
        printf("Tu as de l'argent compris entre 1 et 100 euros.\n");
    } else { // si l'argent est plus grand que 100
        printf("Wahh, tu as plus de 100 euros.\n");
    }
    

    // Utilisation des switch()
    // Utile tout comme les if, else
    int apple = 5;

    switch (apple) {
        case 0: // si la valeure de apple vaut 0 alors
            printf("Tu n'as pas de pomme.\n");
            break; // <-- sortir de la boucle de la condition

        case 5: // si la valeure de apple vaut 5 alors
            printf("Tu as 5 pommes.\n");
            break; // <-- sortir de la boucle de la condition
    
        default: // si la valeure ne rentre dans aucun des cas précedent
            break;
    }

    /* Utilisation des terner
        Ex:     condition ? true : false
                (condition) ? true : false  
    */     
    int banana = 15;

    (banana == 15) ? printf("Tu as 15 bananes\n") : printf("Tu n'as pas 15 bananes\n");
    /*    ^                    ^                                    ^
    condition = si         si c'est vrai l'afficher           si c'est faux l'afficher  
    il y a 15 bananes         avec un printf("");                   avec un printf("");  
    */

    // Autre example

    int x = 15;
    int y = -1;

    y = (x == 15) ? 1 : 0;
    /*              ^   ^
        si x vaut 15 -> 1 = vrai sinon  0 = faux
    */        
    if (y == 1) {
        printf("Y est vrai\n");
    } else {
        printf("Y est faux !\n");
    }
    

    return 0;
}