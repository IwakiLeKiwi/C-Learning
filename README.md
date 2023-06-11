# 7-Modularisation

The seventh lesson is about modularisation

Modularisation is the use of more than one file in a program.
<br>This will ensure that a single file is not TOO long and incomprehensible, but also allows variables to be declared that can be used in all the other files.

<br>Modularisation must have a minimum of 3 files. 2 ``.c`` files and one ``.h`` file.
- The ``.h`` file is the declaration of the ``"prototypes"`` of the functions.
- The second ``.c`` file is used to implement the functions declared in the ``.h`` file. If you want to use the ``prototypes`` in the ``.h`` file, you need to implement it as follows: 
```c
#include "file.h"
```
<br> To finish the last ``.c`` file can use the functions declared before while implementing the ``.h`` file as well.

## Result
```
Player level before reset: 15
Player level after reset: 0
Player level changed to: 2
Player level increased: 2
Player level increased: 4
Player level increased: 6
```