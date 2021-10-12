//    https://codeforces.com/problemset/problem/330/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c, rcnt = 0, ccnt = 0;
	cin >> r >> c;
	string s[r+5];
	for(int i = 0; i < r; i++) cin >> s[i];
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(s[i][j] == 'S') {
				rcnt++;
				break;
			}
		}
	}
	for(int i = 0; i < c; i++) {
		for(int j = 0; j < r; j++) {
			if(s[j][i] == 'S') {
				ccnt++;
				break;
			}
		}
	}
	cout << (r * c) - (rcnt * ccnt) << endl;
}
