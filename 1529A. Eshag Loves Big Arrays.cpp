//    https://codeforces.com/problemset/problem/1529/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a[123];
	cin >> t;
	while(t--) {
		cin >> n;
		int count = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(int i = 1; i < n; i++) {
			if(a[0] < a[i]) count ++;
		}
		cout << count << endl;
	}
}
