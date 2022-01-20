//    https://codeforces.com/contest/1399/problem/B


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(auto &it : a) cin >> it;
	for(auto &it : b) cin >> it;
	
	int mna = *min_element(a.begin(), a.end());
	int mnb = *min_element(b.begin(), b.end());
	long long ans = 0;
	for(int i = 0; i < n; i++) 
		ans += max(a[i] - mna, b[i] - mnb);
	cout << ans << endl;
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
