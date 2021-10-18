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
        /*
        cout << "swap " << i1 << " and " << i2 << endl;
        for (int i=0; i<n; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
        */
        bool sorted = true;
        for (int i=0; i<n-1; i++) {
            if (a[i+1] < a[i]) {
                sorted = false;
            }
        }
        cout << (sorted ? "Sorted!" : "Unsorted!") << endl;
    }
}
