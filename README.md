# C Stash

1. [opGrandes](#1-opgrandes): Operações aritméticas com números grandes
2. [paralegrep](#2-paralegrep): Busca de termos em arquivos com paralelismo

---

## 1. opGrandes

Soma, subtração e multiplicação de números que excedem os limites padrão de tipos como `int` ou `long long`, tratando-os como strings.

### Run

a. **Compilação e Execução:**

```bash
cd opGrandes
gcc -o opGrandes opGrandes.c

./opGrandes
```

b. **Entrada:**

```bash
<número de casos de teste>

<número 1>
<número 2>
<operação (1: soma, 2: subtração, ou 3: multiplicação)>
```

---

## 2. paralegrep

Uma implementação multi-thread em C de um buscador de termos em paralelo. Ele monitora um diretório (`fileset`) e ranqueia os arquivos pela ocorrência de um termo.

O programa opera com três tipos de threads:

* **Despachante:** Monitora o diretório `fileset` a cada 5 segundos, identificando arquivos novos ou modificados para enviá-los às threads operárias.
* **Operárias:** Recebem um caminho de arquivo, contam as ocorrências do termo buscado e enviam o resultado para a thread de ranking.
* **Ranking:** Consolida os resultados e exibe, a cada 5 segundos, o top 10 de arquivos com mais ocorrências.

### Run

a.  **Ambiente:**
    - Adicione arquivos `.txt` ao diretório `fileset` para que o programa possa processá-los.

b.  **Compilação e Execução:**

```bash
cd paralegrep
gcc -pthread -o paralegrep paralegrep.c

./paralegrep sistemas
```
