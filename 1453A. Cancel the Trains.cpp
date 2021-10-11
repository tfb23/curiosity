//    https://codeforces.com/problemset/problem/1453/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, m, bottom[123], left[123];
	cin >> t;
	while(t--) {
		cin >> n >> m;
		int count = 0;
		for(int i = 0; i < n; i++) cin >> bottom[i];
		for(int j = 0; j < m; j++) cin >> left[j];
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(bottom[i] == left[j]) count++;
			}
		}
		cout << count << endl;
	}
}
