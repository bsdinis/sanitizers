#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(128 * sizeof(int));
    printf("%d\n", arr[128]);
    free(arr);

    return 0;
}
