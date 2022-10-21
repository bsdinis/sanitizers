#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *f(size_t len) {
    int *p = malloc(len * sizeof(int));
    p[0] = 1;
    for (size_t i = 1; i < len; ++i) {
        p[i] = (len + i * 2) * p[i - 1];
    }

    return p;
}

int main(int argc, char **argv) {
    srand(time(NULL));
    int sum = 0;

    for (int i = 0; i < 16; i++) {
        size_t len = ((size_t)rand()) % 128;
        int *p = f(len);
        for (size_t j = 0; j < len; j++) {
            sum += p[j];
        }
    }
    printf("%d\n", sum);
    return 0;
}
