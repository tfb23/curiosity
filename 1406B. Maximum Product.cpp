//    https://codeforces.com/contest/1406/problem/B


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	ll n; cin >> n;
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	ll x = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
	ll y = a[0] * a[1] * a[2] * a[3] * a[n - 1];
	ll z = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
	cout << max(x, max(y, z)) << endl;
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
