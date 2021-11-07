#include <stdio.h>
#include <vector>
#include "digits.hpp"

bool check(long long x, int base) {
    string s = int_to_string(x, base);
    long long x2 = parse_int(s, base);
    if (x2 != x) {
        printf("%lld converted to '%s'(%d) but parsed as %lld\n",
               x, s.c_str(), base, x2);
        return false;
    }
    return true;
}

int main() {
    init_digits();
    vector<int> bases {2,3,4,5,10,12,16,17};
    for (int base : bases) {
        for (long long x = -100; x <= 100; x++) {
            if (!check(x, base)) {
                return 1;
            }
        }
    }
    return 0;
}
