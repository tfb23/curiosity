//    https://codeforces.com/contest/1520/problem/B


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	int res = 0;
	for(ll pw = 1; pw <= n; pw = pw * 10 + 1) {
		for(int d = 1; d <= 9; d++) {
			if(pw * d <= n) res++;
		}
	}
	cout << res << endl;
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
