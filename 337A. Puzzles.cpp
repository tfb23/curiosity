//    https://codeforces.com/problemset/problem/337/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, n, m;
	cin >> n >> m;
	int a[1234];
	for(i = 0; i < m; i++) cin >> a[i];
	sort(a, a+m);
	int min = a[n - 1] - a[0];
	for(i = 1; i <= m - n; i++) {
		if(a[i + n - 1] - a[i] < min) {
			min = a[i + n - 1] - a[i];
		}
	}
	cout << min << endl;
}
