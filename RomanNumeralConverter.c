#include <stdio.h>

int main() {
    int a;

    printf("qtd de números a serem transformados: "); scanf("%d", &a);

    int x[a];

    for (int i = 0; i < a; i++) {
        printf("number between 1 and 3999: "); scanf("%d", &x[i]);
    }
    char *roman_numerals[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

    for (int i = 0; i < a; i ++) {
        int n = x [i];

        if (n < 1 || n > 3999) {
            printf ("invalid number\n"); continue;
        }
        int values [] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

        for (int j = 12; j >= 0; j --) {
            while (n >= values [j]) {
                printf("%s", roman_numerals [j]); n -= values [j];
            }
        }
        printf("\n");
    }

    return 0;
}
