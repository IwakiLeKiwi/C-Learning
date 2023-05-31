# 2-Interaction
The second lesson is all about interaction.

We'll be able to ask a user for a number/letter that he can write to the console <br>output using the ``scanf()`` function.

To request a value, we need to add the symbol ``&`` in front of it to tell the program that <br>this value must store something.

## Using scanf()
```c
#include <stdio.h>

int main() {

    signed char letter = 'A';

    scanf("%c", &letter);
    printf("Selected letter -> ", letter);
    
    return 0;
}
```

## Result
```
Quel age avez-vous ? 23
Vous avez 23 ans.
Entrez une lettre : T 
Lettre choisie -> T
```