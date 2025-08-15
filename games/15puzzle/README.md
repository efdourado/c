# 15 Puzzle Game

A terminal version to get all the numbered tiles (1–15) in order by sliding them into the empty space

## Controls

* **esc** - quit the game

## to Play

```bash
cd games/15puzzle
gcc -o 15puzzle game-15puzzle.c -lncurses
./15puzzle
```

## Notes

* You’ll need the **ncurses library** for the terminal graphics
* The board shuffles randomly every time you start a new game