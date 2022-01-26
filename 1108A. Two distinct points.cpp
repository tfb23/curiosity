//    https://codeforces.com/contest/1108/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if(a != d) cout << a << " " << d << endl;
		else cout << b << " " << c << endl;
	}
}
