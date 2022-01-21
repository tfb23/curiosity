//    https://codeforces.com/contest/1627/problem/B


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	vector<int> v;
	for(int i = 0; i < n; i++) 
		for(int j = 0; j < m; j++) 
			v.push_back(max(i, n - i - 1) + max(j, m - j - 1));
	sort(v.begin(), v.end());
	for(int i = 0; i < n * m; i++) 
		cout << v[i] << " ";
	cout << endl;
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
