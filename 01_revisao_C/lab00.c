#include <stdio.h>

// n! = n * (n - 1) * (n - 2) * ... * 1
// 0! = 1
// assuma que n >= 0
int fatorial(int n) {
    if (n == 0) { return 1; }
    else {
        int fat = 1;

        for (int i = n; i > 1; i--) {
            fat *= i;  // fat = fat * i;
        }

        return fat;
    }
}


// n! = n * (n - 1) * (n - 2) * ... * 1
// 0! = 1
// assuma que n >= 0
int fatorial_avancado(int n) {
    if (n == 0) { return 1; }
    else {
        int fat = 1;

        for (; n > 1; n--) {
            fat *= n;  // fat = fat * n;
        }

        return fat;
    }
}



int main() {
    int a, b;

    scanf("%d %d", &a, &b);  // *&a = a = primeiro valor lido,
                             // *&b = b = segundo valor lido

    int fat_a = fatorial(a);
    int fat_b = fatorial(b);
    int soma = fat_a + fat_b;

    printf("%d\n", fat_a);
    printf("%d\n", fat_b);
    printf("%d\n", soma);
    // equivalente
    // printf("%d\n%d\n%d\n", fat_a, fat_b, soma);

    return 0;
}