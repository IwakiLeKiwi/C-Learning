# 6-Functions
Lesson six looks at functions.

Functions are used to facilitate repetition in complete code.
<br>Ex: 
<br>``int ball_pos_x;``

``ball_pos_x = 25``

// Later

``ball_pos_x = 25;``

We can change this with a function

```c
int init_ball(int posX) {
    posX = 150;
    return posX;
}
```

``ball_pos_x = init_ball(ball_pos_x);``

## Result
```
Before the game: 150
After game : 150
Hello
```