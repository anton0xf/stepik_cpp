#include <iostream>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    long long p[m];
    for(int j=0; j<m; j++){
      p[j] = 0;
    }
    long long cur;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> cur;
            p[j] += cur;
        }
    }
    for(int j=0; j<m; j++){
      cout << p[j] << ' ';
    }
}