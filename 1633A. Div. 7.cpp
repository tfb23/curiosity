//    https://codeforces.com/contest/1633/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n;
	cin >> n;
	int x = n % 7;
	int y = 7 - x;
	int xx = n % 10;
	if(n % 7 == 0) n = n;
	else if(xx + y < 10) n += y;
	else n -= x;
	cout << n << endl;
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
