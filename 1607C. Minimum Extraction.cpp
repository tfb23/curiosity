//    https://codeforces.com/contest/1607/problem/C


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, i , s = 0;
	cin >> n;
	ll a[n];
	for(auto &i : a) cin >> i;
	sort(a, a + n);
	ll res = a[0];
	for(i = 0; i < n; i++) {
		a[i] -=s;
		s += a[i];
	}
	for(i = 0; i < n; i++) 
		res = max(res, a[i]);
		
	cout << res << endl;
}


int main()
{
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
