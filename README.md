# C Stash

this a collection of C files designed to demonstrate different problem-solving approaches in pure C. It serves as a practical reference for studying data handling, concurrency, and system programming, while also exploring interactive applications

## index

1. [large number arithmetic](#1-large-number-operations)
2. [parallel term search](#2-parallel-term-search)
3. [games](#3-games)
   
   3.1 [15 puzzle](#31-15-puzzle)

---

# 1. large number arithmetic

arithmetic with numbers beyond standard data type limits by processing them as strings. Supports **Addition (1)**, **Subtraction (2)**, and **Multiplication (3)**

**run:**

```bash
cd large-number-arithmetic
gcc -o large-number-arithmetic large-number-arithmetic.c
./large-number-arithmetic
```

**input format:**

```
<number of test cases>

<number 1>
<number 2>
<operation>
```

---

# 2. parallel term search

multi-threaded program that scans `.txt` files in a `fileset` directory and ranks them by frequency of a given search term

**run:**

```bash
cd parallel-term-search
gcc -pthread -o parallel-term-search parallel-term-search.c
./parallel-term-search <term>
```

---

# 3. games

## 3.1 15 puzzle

terminal version of the sliding puzzle where you arrange tiles 1–15 in order

**run:**

```bash
cd games/15puzzle
gcc -o 15puzzle 15puzzle.c -lncurses
./15puzzle
```

**notes:** requires **ncurses**. The board shuffles randomly at each start