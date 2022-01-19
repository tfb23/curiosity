//    https://codeforces.com/contest/1367/problem/B


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	int a = 0, b = 0;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if(x % 2 != i % 2) {
			if(i % 2 == 0) a++;
			else b++;
		}
	}
	if(a != b) cout << -1 << endl;
	else cout << a << endl;
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
