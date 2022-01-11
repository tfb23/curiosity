//    https://codeforces.com/contest/1520/problem/D



#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	map<int, int> mp;
	ll res = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		x -= i;
		res += mp[x];
		mp[x]++;
	}
	cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
    	solve();
    }
    return 0;
}
