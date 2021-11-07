#include <stdio.h>
#include "digits.hpp"

bool check(string s, int base, long long expected) {
    long long x = parse_int(s, base);
    if (x != expected) {
        printf("'%s'(%d) parsed as %lld but expectd %lld\n",
               s.c_str(), base, x, expected);
    }
    return (x == expected);
}

int main() {
    init_digits();
    bool res = check("0", 10, 0)
        && check("0", 32, 0)
        && check("1", 2, 1)
        && check("10", 2, 2)
        && check("13", 10, 13)
        && check("F", 16, 15)
        && check("-FF", 16, -255)
        && check("123456", 10, 123456);
    return res ? 0 : 1;
}
