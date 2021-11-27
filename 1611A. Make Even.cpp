//    https://codeforces.com/contest/1611/problem/A


//Author: Toushiful Ferdous Badhan 

#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	int no = n;
	int even = 0;
	int last = no % 10;
	
	if (last % 2 == 0) {
		cout << 0; return;
	}
	int first = -1;
	while (no > 0) {
		last = no % 10;
		if (last % 2 == 0) {
			even++;
		}
		first = last;
		no /= 10;
	}
	if (even == 0) {
		cout << -1; return;
	}
	if (first % 2 == 0) {
		cout << 1; return;
	}
	else
		cout << 2;


}
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		solve();
		cout << '\n';
	}
	return 0;
}
