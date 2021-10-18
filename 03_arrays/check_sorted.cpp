#include <iostream>
using namespace std;
int main() {
    int n, q; cin >> n >> q;
    long long a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int j=0; j<q; j++) {
        int i1, i2; cin >> i1 >> i2;
        swap(a[i1 - 1], a[i2 - 1]);
        bool sorted = true;
        for (int i=0; i<n-1; i++) {
            if (a[i+1] < a[i]) {
                sorted = false;
            }
        }
        cout << (sorted ? "Sorted!" : "Unsorted!") << endl;
    }
}
