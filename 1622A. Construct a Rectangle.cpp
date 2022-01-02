//    https://codeforces.com/contest/1622/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a[5];
		for(long long i = 0; i < 3; i++) cin >> a[i];
		sort(a, a + 3);
		
		if(a[0] + a[1] == a[2]) cout << "YES" << endl;
		else if(a[0] == a[1]) {
			if(a[2] % 2 == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else if(a[1] == a[2]) {
			if(a[0] % 2 == 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
}
