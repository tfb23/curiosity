//    https://codeforces.com/problemset/problem/1541/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		int a[n + 2];
		for(int i = 1; i <= n; i++) a[i] = i;
		if(n % 2 == 0) {
			for(int i = 1; i <= n; i += 2) {
				swap(a[i], a[i + 1]);
			}
		}
					else {
						for(int i = 1; i <= n - 3; i += 2) {
							swap(a[i], a[i + 1]);
						}
						int ar = a[n];
						int br = a[n - 1];
						int cr = a[n - 2];
						a[n - 2] = ar;
						a[n - 1] = cr;
						a[n] = br;
					}
					for(int i = 1; i <= n; i++) {
						cout << a[i] << " ";
					}
	cout << endl;	
	}
}
