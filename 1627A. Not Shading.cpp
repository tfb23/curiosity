//    https://codeforces.com/contest/1627/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n, m, r, c; cin >> n >> m >> r >> c;
	char ch[n + 1][m + 1];
	bool flag = false;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> ch[i][j];
			if(ch[i][j] == 'B') flag = true;
		}
	}
	if(!flag) cout << -1 << endl;
	else if(ch[r][c] == 'B') cout << 0 << endl;
	else {
		flag = false;
		for(int i = 1; i <= n; i++) {
			if(ch[i][c] == 'B') flag = true;
		}
		for(int j = 1; j <= m; j++) {
			if(ch[r][j] == 'B') flag = true;
		}
		if(flag) cout << 1 << endl;
		else cout << 2 << endl;
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
