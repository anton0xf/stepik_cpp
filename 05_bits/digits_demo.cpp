#include <stdio.h>
#include "digits.hpp"

int main() {
    init_digits();
    printf("values: \n");
    for (int i=0; i < VALUES_COUNT; i++) {
        if (values[i] == UNUSED) continue;
        printf("%c -> %lld\n", (char)i, values[i]);
    }
    printf("digits: ");
    for (int i=0; i < DIGITS_COUNT; i++) {
        printf("%c, ", digits[i]);
    }
    printf("\n");
}
