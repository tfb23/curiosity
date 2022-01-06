//    https://codeforces.com/contest/1538/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int s = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			s += a[i];
		}
		if(s % n != 0)
			cout << "-1\n";
			
		else {
			int cnt = 0;
			s /= n;
			for(int i = 0; i < n; i++) {
				if(s < a[i]) cnt++;
			}
			cout << cnt << endl;
		}
	}
}
