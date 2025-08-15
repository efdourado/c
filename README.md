# C Stash

1. [opGrandes](#1-opgrandes): Arithmetic operations with large numbers
2. [paralegrep](#2-paralegrep): Parallelized search for terms in files

---

## 1. Large Number Operations

Performs addition, subtraction, and multiplication on numbers that exceed the standard limits of types like `int` or `long long`, treating them as strings

### Run

a. **Compile and Execute:**

```bash
cd opGrandes
gcc -o opGrandes opGrandes.c

./opGrandes
```

b. **Input:**

```bash
<number of test cases>

<number 1>
<number 2>
<operation (1: addition, 2: subtraction, 3: multiplication)>
```

---

## 2. Parallel Term Search

A multi-threaded implementation in C that monitors a directory (`fileset`) and ranks files based on the number of times a search term appears

The program works with three types of threads:

* **Dispatcher:** Monitors the `fileset` directory every 5 seconds, identifying new or modified files and sending them to worker threads
* **Workers:** Receive a file path, count the occurrences of the search term, and send the results to the ranking thread
* **Ranking:** Consolidates the results and displays the top 10 files with the highest occurrence count every 5 seconds

### Run

a. **Environment:** Add `.txt` files to the `fileset` directory so the program can process them

b. **Compile and Execute:**

```bash
cd paralegrep
gcc -pthread -o paralegrep paralegrep.c

./paralegrep <term>
```
