#include <stdint.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int32_t k = 0x7fffffff;
    k += argc; // signed-integer overflow is UB
    printf("%d\n", k);
    return 0;
}
