//    https://codeforces.com/contest/1624/problem/C


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	int a[n + 5];
	for(int i = 0; i < n; i++) cin >> a[i];
	map<int, int> mp;
	for(int i = 0; i < n; i++) {
		int k = a[i];
		while(k > 0) {
			if(1 <=k && k <=n && mp[k] == 0) {
				mp[k] = 1;
				break;
			}
			k = k / 2;
		}
	}
	bool flag = 0;
	for(int i = 1; i <= n; i++) {
		if(mp[i] != 1) flag = 1;
	}
		if(flag) cout <<"NO" << endl;
		else cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
    return 0;
}
