# Parallel Term Search

A **multi-threaded C program** that monitors a directory (`fileset`) and ranks files based on the frequency of a given search term

The program uses three types of threads:

* **Dispatcher** – Monitors the `fileset` directory every 5 seconds, detects new or updated files, and sends them to worker threads
* **Workers** – Count occurrences of the search term in each assigned file and send the results to the ranking thread
* **Ranking** – Aggregates results and displays the **Top 10 files** with the highest occurrence counts every 5 seconds

## Run

1. **Prepare Environment:**
   Add `.txt` files to the `fileset` directory for processing

2. **Compile and Execute:**

```bash
cd parallel-term-search
gcc -pthread -o parallel-term-search parallel-term-search.c
./parallel-term-search <term>
```