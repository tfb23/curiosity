//    https://codeforces.com/problemset/problem/1234/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	while(q--) {
		int n, x, sum = 0;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> x;
			sum += x;
		}
		cout << (sum + n - 1) / n << endl;
	}
}
