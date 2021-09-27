//    https://codeforces.com/problemset/problem/11/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d, a[2345];
	cin >> n >> d;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(i) {
			if(a[i -1] >= a[i]) {
				ans = ans + (a[i - 1] - a[i]) / d + 1;
				a[i] = a[i] + ((a[i -1] - a[i]) / d + 1) * d;
			}
		}
	}
	cout << ans << endl;
}
