#include <iostream>
using namespace std;

bool beaten(int qi, int qj, int i, int j) {
    return i == qi || j == qj
        || i - qi == j - qj
        || i - qi == qj - j;
}

int main() {
    const int N = 8;
    char b[N][N];
    int qi = -1, qj = -1;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            char c; cin >> c;
            b[i][j] = c;
            if (c == 'F') {
                qi = i; qj = j;
            }
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            char c = b[i][j];
            cout << (c != 'F' && beaten(qi, qj, i, j) ? '!' : c);
        }
        cout << endl;
    }
}
