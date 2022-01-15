//    https://codeforces.com/contest/1612/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int x, y; cin >> x >> y;
	if( (x + y) % 2 !=0 ) cout << "-1 -1"<< endl;
	else {
		int a, b;
		a = x / 2, b = y / 2;
		if(x & 1) a++;
		cout << a << " " << b << endl;
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
