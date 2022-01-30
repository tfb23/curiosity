//    https://codeforces.com/contest/1632/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	if(n == 1) cout << "YES" << endl;
	else if(n == 2 && (s == "01" || s == "10")) cout << "YES" << endl;
	else cout << "NO" << endl;
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
