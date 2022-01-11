//    https://codeforces.com/contest/1535/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	vector<int> s(4);
	for(int& x: s) cin >> x;
	if( min(s[0], s[1]) > max(s[2], s[3]) || max(s[0], s[1]) < min(s[2], s[3]) )
		cout << "NO" << endl;
	else cout << "YES" << endl;
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
