//    https://codeforces.com/problemset/problem/1552/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		string s;
		cin >> n >> s;
		string s1 = s;
		sort(s1.begin(), s1.end());
		int ans = 0;
		for(int i = 0; i < n; i++) {
			ans += (s[i] != s1[i]);
		}
		cout << ans << endl;
	}
	return 0;
}
