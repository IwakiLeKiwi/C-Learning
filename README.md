# Clone branch
# 10-Tables

The tenth lesson is about tables

Arrays in C are data structures used to store and organize several elements of the same type. They are accessed via indices and can be traversed using loops. Care must be taken to avoid memory overruns.

Arrays in C are data structures used to store and organize several elements of the same type. Here are a few examples:

Declaration of an array of integers :
```c
int array[5];
```

Initialize an integer array :
```c
int array[5] = {1, 2, 3, 4, 5};
```
Access to array elements :
```c
int value = array[2]; // Access the 3rd element of the array
```
Browse array elements with a loop :
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", array[i]);
}
```
Passing an array as a function argument :
```c
void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

// Call function
displayArray(array, 5);
```

## Result 
```
[16] [84] [-2] [188] [3]

[16] [84] [-5] [188] [3]

[0] [33] [66] [99] [132]

[0] [33] [-5] [99] [132]

Element indice [0][0] = 1
Element indice [0][1] = 2
Element indice [1][0] = 3
Element indice [1][1] = 4
Element indice [2][0] = 5
Element indice [2][1] = 6
```