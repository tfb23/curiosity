//    https://codeforces.com/problemset/problem/365/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, cnt = 0;
	int s[12];
	cin >> n >> k;
	int j, p;
	for(int i = 0; i < n; i++) {
		int a;
		memset(s, 0, sizeof(s));
		cin >> a;
		while(a > 0) {
			p = a % 10;
			if(p <= k) {
				s[p] = 1;
			}
			a /= 10;
		}
		for(j =  0; j <=k; j++) {
			if(s[j] == 0) break;
		}
		if(j > k) cnt++;
	}
	cout << cnt << endl;
}
