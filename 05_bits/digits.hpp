#include <string>
using namespace std;

const int VALUES_COUNT = 256;
const int DIGITS_COUNT = 62;
const long long UNUSED = -1;
long long values[VALUES_COUNT];
char digits[DIGITS_COUNT];

void init_digits() {
    for (int i=0; i < VALUES_COUNT; i++) {
        values[i] = UNUSED;
    }

    long long cur_digit = 0LL;
    for (char a='0'; a <= '9'; a++, cur_digit++) {
        values[(int)a] = cur_digit;
        digits[cur_digit] = a;
    }
    for (char a='A'; a <= 'Z'; a++, cur_digit++) {
        values[(int)a] = cur_digit;
        digits[cur_digit] = a;
    }
    for (char a='a'; a <= 'z'; a++, cur_digit++) {
        values[(int)a] = cur_digit;
        digits[cur_digit] = a;
    }
}

long long parse_int(string a, int base) {
    long long b = (long long) base;
    long long res = 0LL, mult = 1LL;
    size_t i = 0;
    if (a[i] == '-') {
        mult = -1LL;
        i++;
    }
    for (; i < a.length(); i++) {
        long long val = values[(int)a[i]];
        if (val == UNUSED || val >= b) {
            break;
        }
        res = res * b + val;
    }
    return res * mult;
}

string int_to_string(long long x, int base) {
    if (x == 0LL) {
        return "0";
    }
    string sign = "", res = "";
    if (x < 0LL) {
        x = -x;
        sign = "-";
    }
    for (; x != 0LL; x /= base) {
        res.push_back(digits[x % base]);
    }
    int len = res.length();
    for (int i=0; i < len / 2; i++) {
        swap(res[i], res[len - i - 1]);
    }
    return sign + res;
}
