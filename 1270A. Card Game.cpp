//    https://codeforces.com/problemset/problem/1270/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k1, k2;
	cin >> t;
	while(t--) {
		cin >> n >> k1 >> k2;
		int a[n], b[n];
		for(int i = 0; i < k1; i++) cin >> a[i];
		for(int j = 0; j < k2; j++) cin >> b[j];
		sort(a, a + k1);
		sort(b, b + k2);
		if(a[k1 - 1] < b[k2 - 1]) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}
