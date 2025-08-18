# C Stash

Collection of small C programs and experiments

## Index

1. [Large Number Arithmetic](#1-large-number-operations)
2. [Parallel Term Search](#2-parallel-term-search)
3. [Games](#3-games)
   
   3.1 [15 Puzzle](#31-15-puzzle)

---

# 1. Large Number Arithmetic

Arithmetic with numbers beyond standard data type limits by processing them as strings. Supports **Addition (1)**, **Subtraction (2)**, and **Multiplication (3)**

**Run:**

```bash
cd large-number-arithmetic
gcc -o large-number-arithmetic large-number-arithmetic.c
./large-number-arithmetic
```

**Input Format:**

```
<number of test cases>

<number 1>
<number 2>
<operation>
```

---

# 2. Parallel Term Search

Multi-threaded program that scans `.txt` files in a `fileset` directory and ranks them by frequency of a given search term

**Run:**

```bash
cd parallel-term-search
gcc -pthread -o parallel-term-search parallel-term-search.c
./parallel-term-search <term>
```

---

# 3. Games

## 3.1 15 Puzzle

Terminal version of the sliding puzzle where you arrange tiles 1–15 in order

**Run:**

```bash
cd games/15puzzle
gcc -o 15puzzle 15puzzle.c -lncurses
./15puzzle
```

**Notes:** Requires **ncurses**. The board shuffles randomly at each start

---