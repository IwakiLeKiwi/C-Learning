# 8-Preprocessor

The eighth lesson is about preprocessors

Preprocessors are defined by a variable written at the start of the program, written #define.
<br>This can be a constant, an integer ``(int)`` or even a function.

Ex:
```
#define log printf
```

``log`` also corresponds to ``printf()``. 
<br>Each time the program encounters this word, it will replace it with ``printf()``.

Some constants are already defined:

``__FILE__`` (file name)
<br>``__LINE__ ``(file line)
<br>``__DATE__`` (compilation date)
<br>``__TIME__`` (compilation time)

## Result
```
Price incl. VAT: 18 euros
525 cm2
File name: .\src\preprocessor.c
```