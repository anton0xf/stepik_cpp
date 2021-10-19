#include <iostream>
using namespace std;
int main() {
    const int N = 8;
    char b[N][N];
    int ki = -1, kj = -1;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            char c; cin >> c;
            b[i][j] = c;
            if (c == 'K') {
                ki = i; kj = j;
            }
        }
    }
    if (ki >= 2 && kj >= 1) {
        b[ki - 2][kj - 1] = '!';
    }
    if (ki >= 2 && kj < N - 1) {
        b[ki - 2][kj + 1] = '!';
    }
    if (ki < N - 2 && kj >= 1) {
        b[ki + 2][kj - 1] = '!';
    }
    if (ki < N - 2 && kj < N - 1) {
        b[ki + 2][kj + 1] = '!';
    }

    if (ki >= 1 && kj >= 2) {
        b[ki - 1][kj - 2] = '!';
    }
    if (ki >= 1 && kj < N - 2) {
        b[ki - 1][kj + 2] = '!';
    }
    if (ki < N - 1 && kj >= 2) {
        b[ki + 1][kj - 2] = '!';
    }
    if (ki < N - 1 && kj < N - 2) {
        b[ki + 1][kj + 2] = '!';
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << b[i][j];
        }
        cout << endl;
    }
}
