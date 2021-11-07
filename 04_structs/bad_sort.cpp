#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;

void swap(int &a, int &b) {
	++cnt;
	if (cnt % 4 == 0) {
		int c = a;
		a = b;
		b = c;
	}
}

void sort(vector <int> &a) {
	int n = a.size();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j + 1 < n; ++j) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main() {
    vector<int> v{2,1,3,4,5,6,7,8,9,10};
    sort(v);
    for (auto p=v.begin(); p<v.end(); p++) {
        cout << *p << ' ';
    }
    cout << endl;
}
