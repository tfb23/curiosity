//    https://codeforces.com/contest/1604/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> a(n + 1);
		bool flag = true;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			flag &= a[i] > a[i - 1];
		}
		if(n % 2 == 0 or !flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
