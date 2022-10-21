#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = calloc(128, sizeof(int));
    if (arr == NULL) {
        return -1;
    }

    free(arr);
    arr[0] += 1;

    return 0;
}
