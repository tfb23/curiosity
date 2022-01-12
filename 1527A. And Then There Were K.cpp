//    https://codeforces.com/contest/1527/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	int last = 0;
	for(int i = 0; i < 30; i++) 
		if(((n>>i)&1) == 1) last = i;
	
	cout << (1 << last) -1 << endl;
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
