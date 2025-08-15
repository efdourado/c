# 15 Puzzle Game

A terminal version to get all the numbered tiles (1–15) in order by sliding them into the empty space

## Run

```bash
cd games/game-15puzzle
gcc -o 15puzzle game-15puzzle.c -lncurses
./game-15puzzle
```

* Use **arrow keys** to move tiles; press **Esc** to quit
* Requires the **ncurses library** for the terminal graphics
* The board shuffles randomly each game