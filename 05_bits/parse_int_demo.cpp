#include <stdio.h>
#include "digits.hpp"

int main() {
    init_digits();
    string s = "-FF";
    printf("%s = %lld\n", s.c_str(), parse_int(s, 16));
}
