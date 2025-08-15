# Parallel Term Search

This is a **multi-threaded C program** that monitors a directory (`fileset`) and ranks files based on the frequency of a given search term

## Run

1. **Prepare environment** by adding `.txt` files to the `fileset` directory (create one)

2. **Compile and Execute:**

```bash
cd parallel-term-search
gcc -pthread -o parallel-term-search parallel-term-search.c
./parallel-term-search <term>
```