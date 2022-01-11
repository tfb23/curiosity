//    https://codeforces.com/contest/1521/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	ll a, b; cin >> a >> b;
	if(b == 1) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		cout << a << " " << a * b << " " << a * (b + 1) << endl;
	}
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
