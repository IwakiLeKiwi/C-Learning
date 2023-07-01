#include <stdio.h>
#include <string.h> // <-- fichier qui permet d'utiliser les fonctions disponibles avec les string

int main() {

    /*
        [Fonctions des chaînes]
            strcpy() : copie une chaîne dans une autre
            strlen() : longueur d'une chaîne (sans caractère de fin de chaîne -> '\0'  )
            strcmp() : comparer deux chaînes (lexicographiquement)
            strcat() : concaténer deux chaînes (fusionner)
            strstr() : chercher une chaîne dans une autre
            strchr() : chercher la 1ère occurence du caractère

            sprintf() : écrire dans une chaîne

        Chaîne de caractère:
            tableau de 'char' (de caractères) mis ensemble et qui créé une chaîne

            /!\ Il y a toujours le caractère de fin de chaîne: '\0' qui compte pour 1.
            Il faut compter une case de plus quand un créé un tableau

        Pour afficher une chaîne de caractère on utilise '%s' (string)


        /!\ Déclarer un char:
            Un seul caractère alors:
                char mot = 'A';

            Plusieurs caractères alors:
                char phrase[] = "Phrase";
    */

    // Afficher une chaîne de caractères
    signed char salut[] = "Salut";

    printf("%s\n", salut); // Affichage d'une chaîne de caractères avec '%s'


    // Pouvoir donner une chaîne de caractères dans la console
    char pseudo[25] = "Iwaki";
    char stockage[256];

    printf("Ton pseudo a la base : %s\n", pseudo); // affichage initial

    printf("Changer de pseudo ? ");
    scanf("%s", stockage); // stock la valeur entrée dans la chaîne de caractères

    strcpy(pseudo, stockage); // Copie de la chaîne de caractère (on remplace le contenu de la chaîne pseudo dans la chaîne stockage où on a rentré la valeur)
 
    printf("Ton nouveau pseudo : %s\n", pseudo); // Affichage


    // Utilisation de strlen() pour avoir le nombre de caractères qui composent de la chaîne
    signed char coucou[] = "Coucou";

    printf("Mot : %s\n", coucou);
    printf("Nombre de lettres : %d\n", strlen(coucou)); 


    // Comparer deux chaînes
    char mot1[] = "Baguette";
    char mot2[] = "Avion";
    int test = strcmp(mot1, mot2); // strcmp() compare les chaînes

    if (test == 0) { // si c'est 0, les chaînes sont identiques
        printf("Les deux mots sont les meme.\n");
    } else if (test < 0) { // si c'est plus petit ou plus grand que 0, on classe par ordre alphabétique
        printf("%s est avant le mot %s\n", mot1, mot2);
    } else {
        printf("%s est apres le mot %s\n", mot1, mot2);
    }


    // Fusion de 2 chaînes de caractères
    char mot3[] = "Boul et ";
    char mot4[] = "Bill\n";

    printf("%s", strcat(mot3, mot4)); // <-- fusion de mot1 et mot2

    /*
        Pour fusionner plus de 2 chaînes de caractères il faut utiliser un strcat() dans un autre strcat()
        Ex:
            char boul[] = "Boul";
            char et[] = " et ";
            char bill[] = "Bill\n";
            printf("%s", strcat(strcat(boul, et), bill));

        Dans ce cas on fait la fusion d'une autre fusion
    */


    // Chercher une chaîne dans une autre
    char phrase[] = "Titi et Grosminet";
    char motAChercher[] = "Grosminet";

    if (strstr(phrase, motAChercher) != NULL) {
        printf("Le mot: %s, a ete trouve !\n", motAChercher);
    }


    // Chercher tous les caractères à partir d'une chaîne
    char yinYang[] = "Yin-Yang";
    char c = '-'; // Un seul caractère donc -> '' et non ""

    char *resultat = strchr(yinYang, c); // Affiche tout ce qu'il y a à partir du char 'c' qui est '-'

    printf("%s\n", resultat);

    return 0;
}