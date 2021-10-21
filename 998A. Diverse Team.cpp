//    https://codeforces.com/problemset/problem/988/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	set<int> s;
	vector<int> ans;
	for(int i = 0; i <n; i++) {
		int x;
		cin >> x;
		if(!s.count(x)) {
			ans.push_back(i);
			s.insert(x);
		}
	}
	if(int(ans.size()) < k) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		for(int i = 0; i < k; i++) {
			cout << ans[i] + 1 << " ";
		}
		cout << endl;
	}
}
