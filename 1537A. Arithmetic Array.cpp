//    https://codeforces.com/contest/1537/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a[1234];
	cin >> t;
	while(t--) {
		cin >> n;
		int sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		if(sum < n) {
			cout << 1 << endl;
		}
		else {
			cout << sum - n << endl;
		}
	}
}
