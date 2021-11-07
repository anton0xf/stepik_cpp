#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 2;
    int *a1 = &a, *a2 = &b, *a3 = &b, *a4 = &a, *a5 = &c,
        *a6 = &b, *a7 = &b, *a8 = &b, *a9 = &a, *a10 = &b;
    int* ps[10] = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10};
    int g[10];
    for (int i=0; i<10; i++) {
        g[i] = 0;
    }
    int gi = 1;
    for (int i=0; i<10; i++) {
        if (g[i] > 0) {
            continue;
        }
        g[i] = gi;
        for (int j=i+1; j<10; j++) {
            if (ps[i] == ps[j]) {
                g[j] = gi;
            }
        }
        gi++;
    }
    for (int i=0; i<10; i++) {
        cout << g[i] << ' ';
    }
    cout << endl;
}
