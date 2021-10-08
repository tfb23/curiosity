//    https://codeforces.com/problemset/problem/1454/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a[123456];
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> cnt(n + 1), idx(n + 1);
		for(int i = 0; i <n; i++) {
			int x;
			cin >> x;
			++cnt[x];
			idx[x] = i + 1;
		}
		int ans = -1;
		for(int i = 0; i <= n; i++) {
			if(cnt[i] == 1) {
				ans = idx[i];
				break;
			}
		}
		cout << ans << endl;
	}
}
