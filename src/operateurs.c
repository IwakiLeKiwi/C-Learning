#include <stdio.h>

int main() {

    /*
        + (addition)
        - (soustraction)
        * (multiplication)
        / (division) -> 5 / 2 = 2
        % (modulo) -> 5 % 2 = 1

        <variable> = <variable> + X -- > <variable> += X

        A = A - X
        A -= X
    ---------------------------
        A += 1 --> A = A + 1
        A -= 1 --> A = A - 1

        variable = i++
        variable = ++i
    */

    // Niveau par défaut
    int level = 0;

    printf("Niveau : %d\n", level);

    // Le joueur fait des quêtes
    level += 5; // level += 5 -> level = level + 5
    printf("Niveau : %d\n", level);

    // Le joueur perd un niveau
    --level; // --level -> level -= 1 -> level = level - 1
    printf("Niveau : %d\n", level);

    return 0;
}