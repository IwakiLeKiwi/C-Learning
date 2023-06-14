# Learning C

Each branch corresponds to a video from a [series of tutorials](https://www.youtube.com/watch?v=90hGCMC3Chc&list=PLrSOXFDHBtfEh6PCE39HERGgbbaIHhy4j) 
available on youtube and created by a french guy.

This repository will be updated with descriptive comment lines
to learn how to code and learn C easily.

Each C lesson will be accompanied by an emoji to distinguish them.

The ultimate goal is for me to be able to create my own working Snake game.

### All exercises
- 1 - [💡 Variables](https://github.com/IwakiLeKiwi/C-Learning/tree/1-variables)
- 2 - [🚀 Interactions](https://github.com/IwakiLeKiwi/C-Learning/tree/2-interactions)
- 3 - [➕ Opérateurs](https://github.com/IwakiLeKiwi/C-Learning/tree/3-operateurs)
- 4 - [❓ Conditions](https://github.com/IwakiLeKiwi/C-Learning/tree/4-conditions)
- 5 - [🔁 Boucles](https://github.com/IwakiLeKiwi/C-Learning/tree/5-boucles)
- 6 - [🔧 Fontions](https://github.com/IwakiLeKiwi/C-Learning/tree/6-fonctions)
- 7 - [🧩 Modularisation](https://github.com/IwakiLeKiwi/C-Learning/tree/7-modularisation)
- 8 - [📦 Préprocesseur](https://github.com/IwakiLeKiwi/C-Learning/tree/8-preprocesseur)
- 9 - [🔗 Pointeurs](https://github.com/IwakiLeKiwi/C-Learning/tree/9-pointeurs)

## How to start a C project?
- To start a C project, you need at LEAST this code:
```c
#include <stdio.h>

int main() {
    printf("Hello world");
    return 0;
}
```

## To launch the project:
- Export
```
gcc src/file.c -o out/file.exe
```

- Launch
```
out/file.exe
```