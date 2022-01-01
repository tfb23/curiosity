//    https://codeforces.com/contest/1623/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int n, m, rb, cb, rd, cd;
		cin >> n >> m >> rb >> cb >> rd >> cd;
		cout << min( rb <= rd? rd - rb : 2 * n- rb - rd, 
					 cb <= cd? cd - cb : 2 * m - cb - cd) << '\n';
	}
	return 0;
}
