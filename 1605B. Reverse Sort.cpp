//    https://codeforces.com/contest/1605/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		string s;
		cin >> n >> s;
		string t = s;
		vector<int> ans;
		sort(t.begin(), t.end());
		if(s == t) cout << 0 << endl;
		else {
			for(int i = 0; i < n; i++) {
				if(s[i] != t[i]) ans.push_back(i + 1);
			}
			cout << 1 << endl;
			cout << ans.size() << " ";
			for(auto x : ans) cout << x << " ";
			cout << endl;
		}
	}
}
