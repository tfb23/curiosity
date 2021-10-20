//    https://codeforces.com/problemset/problem/1526/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int a[2 * n];
		for(i = 0; i < 2 * n; i++) cin >> a[i];
		sort(a, a + 2 * n);
		for(i = 0; i < n; i++) cout << a[i] << " " << a[i + n] << " ";
		cout << endl;
	}
}
