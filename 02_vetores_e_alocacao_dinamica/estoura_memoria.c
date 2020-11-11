#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 2000000;
    char* v;


    for (int i = 0; i < n; i--) {
        v = (char*) malloc(100000 * sizeof(char));
        free(v);
    }


    return 0;
}
