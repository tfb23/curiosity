//    https://codeforces.com/contest/1631/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

int calc_max(vector<int> a) {
	 int res = 0;
	 for(auto i : a) res = max(res, i); 
	 return res;
}

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(auto &i : a) cin >> i;
	for(auto &i : b) cin >> i;
	for(int i = 0; i < n; i++) 
		if(a[i] > b[i]) swap(a[i], b[i]);
	cout << calc_max(a) * calc_max(b) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--)
    {
    	solve();
    }
    return 0;
}
