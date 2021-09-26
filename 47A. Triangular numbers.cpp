//    https://codeforces.com/problemset/problem/47/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin >> n;
	bool flag = 0;
	for(int i = 1; i <= n; i++) {
		if( ( (i * (i + 1) / 2) ) == n) flag = 1;
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
