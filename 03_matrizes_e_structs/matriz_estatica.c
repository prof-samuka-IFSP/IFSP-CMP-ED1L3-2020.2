#include <stdio.h>

int main() {
    int m[2][3] = {
        {0, 1, 2}, // elementos da linha 0
        {3, 4, 5}  // elementos da linha 1
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("&m[%d][%d] = %p, m[%d][%d] = %d\n",
                    i, j, &m[i][j], i, j, m[i][j]);
        }
    }

    return 0;
}