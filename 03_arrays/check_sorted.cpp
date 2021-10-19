#include <iostream>
using namespace std;

/* i1 != i2 && a[i1] != a[i2] */
int count_inv(int n, long long a[], int i1, int i2) {
    if (i1 > i2) swap(i1, i2);
    // now i1 < i2
    int inv = 0;
    inv += (i1 > 0) && (a[i1-1] > a[i1]);
    inv += a[i1] > a[i1+1];
    inv += (i2-1 > i1) && (a[i2-1] > a[i2]);
    inv += (i2+1 < n) && (a[i2] > a[i2+1]);
    return inv;
}

int main() {
    int n, q; cin >> n >> q;
    long long *a = new long long[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int inv = 0;
    for (int i=0; i<n-1; i++) {
        inv += a[i] > a[i+1];
    }
    for (int j=0; j<q; j++) {
        int i1, i2;
        cin >> i1 >> i2;
        i1--; i2--;
        if (i1 != i2 && a[i1] != a[i2]) {
            int inv1 = count_inv(n, a, i1, i2);
            swap(a[i1], a[i2]);
            int inv2 = count_inv(n, a, i1, i2);
            inv += inv2 - inv1;
        }
        cout << (inv == 0 ? "Sorted!" : "Unsorted!") << endl;
    }
    delete a;
}
