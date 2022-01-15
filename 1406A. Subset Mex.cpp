//    https://codeforces.com/contest/1406/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	int a[n];
	int ans = 0;
	int m[101] = {0};
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		m[x]++;
	}
	int c = 0;
	for(int i = 0; i < 101; i++) {
		if(m[i] != 0) m[i]--;
		else {
			ans += i; 
			break;
		}
	}
	for(int i = 0; i < 101; i++) {
		if(m[i] != 0) m[i]--;
		else {
			ans += i; 
			break;
		}
	}
	cout << ans << endl;
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
