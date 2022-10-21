#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *arr = calloc(128, sizeof(int));

    int sum = 0;
    for (int i = 0; i < 128; i++) {
        sum += i * argc * arr[(i + argc) % 128];
    }
    free(arr);
    free(arr);

    printf("%d\n", sum);
    return 0;
}
