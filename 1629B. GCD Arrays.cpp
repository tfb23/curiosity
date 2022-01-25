//    https://codeforces.com/contest/1629/problem/B


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		ll l, r, k;
		cin >> l >> r >> k;
		if(l == r) {
			if(l > 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else {
			ll odd = (r - l + 1) / 2;
			ll even = (r - l + 1) / 2;
			if(r % 2 == l % 2) {
				if(r % 2 == 1) odd++;
				else even++;
			}
			if(k >= odd) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
