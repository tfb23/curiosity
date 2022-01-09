//    https://codeforces.com/contest/1606/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		long long n, k; cin >> n >> k;
		long long ans = 0, cur = 1;
		while(cur < k) {
			cur *= 2;
			ans++;
		}
		if(cur < n ) ans += (n - cur + k - 1) / k;
		cout << ans << endl;
	}
}
