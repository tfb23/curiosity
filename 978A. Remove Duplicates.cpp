//    https://codeforces.com/problemset/problem/978/A


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

int main() {
	int a[N], vis[N], ans[N], n, cnt = 0;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	memset(vis, 0, sizeof(vis));
	for(int i = n - 1; i >= 0; i--) {
		if(!vis[a[i]]) {
			vis[a[i]] = 1;
			ans[cnt++] = a[i];
		}
	}
	cout << cnt << endl;
	for(int i = cnt - 1; i >= 0; i--) cout << ans[i] << " ";
	cout << endl;
}
