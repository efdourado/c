#include <stdio.h>
#include <string.h>

int main() {
    int contador = 1; char a [1001];

    printf ("uma frase ('aaa' >> '3a' etc): ");
    fgets (a, sizeof (a), stdin);

    int b = strlen (a);

    for (int i = 1; i <= b; i ++) {
        if (a [i] == a [i-1]) contador ++;
        else {
            if (contador != 1) {
                printf ("%d%c", contador, a [i -1]);
            }
            else {
                printf ("%c", a [i -1]);
            }
            contador = 1;
    } }
return 0; }
