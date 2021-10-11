//    https://codeforces.com/problemset/problem/1092/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	int a[n + 5];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for(int i = 0; i < n - 1; i += 2) {
		sum += a[i + 1] - a[i];
	}
	cout << sum << endl;
}
