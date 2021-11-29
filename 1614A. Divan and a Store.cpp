//    https://codeforces.com/contest/1614/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	long long i, t, n, l, r, k;
	cin >> t;
	while(t--) {
		cin >> n >> l >> r >> k;
		long long a[n + 5], cnt = 0;
		for(i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(i = 0; i < n; i++) {
			if(a[i] > k) break;
			if(a[i] >= l && a[i] <=r) {
				cnt++, k -= a[i];
			}
		}
		cout << cnt << endl;
	}
}
