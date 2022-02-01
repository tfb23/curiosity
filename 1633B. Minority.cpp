//    https://codeforces.com/contest/1633/problem/B


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	string s;
	cin >> s;
	int l = s.size();
	int cnt1 = 0, cnt0 = 0;
	for(int i = 0; i < l; i++) {
		if(s[i] == '1') cnt1++;
		else cnt0++;
	}
	if(cnt1 == cnt0) cout << 0 << endl;
	else if(cnt1 < cnt0) cout << cnt1 << endl;
	else cout << cnt0 << endl;
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
