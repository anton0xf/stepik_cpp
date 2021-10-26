#include <cstdlib>
#include <iostream>
using namespace std;

void usage() {
    cerr << "Usage: chess_board letter row col" << endl;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        usage();
        return 1;
    }
    char letter = argv[1][0];
    int row = atoi(argv[2]);
    int col = atoi(argv[3]);
    if (row <= 0 || row > 8 || col <= 0 || col > 8) {
        usage();
        cerr << "row and col must be between 1 and 8 inclusive" << endl;
        return 2;
    }
    const int N = 8;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << (i == row-1 && j == col-1 ? letter : '.');
        }
        cout << endl;
    }
}
