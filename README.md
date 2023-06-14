# 9-Pointers

The ninth lesson is about pointers, a very important subject.

Suppose you have two variables, ``a`` and ``b``. A pointer can be used to store the address
<br>of either ``a`` or ``b``. This means that you can access the value of ``a`` or ``b`` using the corresponding pointer.
<br>What's more, you can even modify the value of ``a`` or ``b`` using the pointer.

In short, pointers allow you to access and manipulate variables using their addresses, giving you greater flexibility. 
<br>their addresses, offering greater flexibility and efficiency in programming.

#### [VARIABLES]
<br>``maVariable``  : valeur de la variable
<br>``&maVariable`` : adresse de la variables

#### [POINTEURS]
<br>Lorsqu'on déclare un pointeur, on utilise l'opérateur ``*`` pour indiquer que la variable est un pointeur.
<br>Par exemple : ``int *pointeurSurNombreA``;

<br>``*monPointeur = NULL`` ou`` *monPointeur = &maVariable``
<br>(déclaration et initialisation d'un pointeur)

<br>``monPointeur``  : adresse de la variable pointée
<br>``*monPointeur`` : valeur de la variable pointée
<br>``&monPointeur`` : adresse du pointeur

Ex:
```c
int main() {
    int number = 0;
    int *pointerOverNumber = &number
}
```

## Result
```
Address numberA: 0061FF10
BEFORE : A = 15 and B = 28
AFTER : A = 28 and B = 15
I have 1 banana
I now have 5 bananas
``` 