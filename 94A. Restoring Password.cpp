//    https://codeforces.com/problemset/problem/94/A


#include <bits/stdc++.h>
using namespace std;

string a, b, m[11], s1;

int solve(string x) {
	for(int i = 0; i < 10; i++) {
		if(x == m[i]) return i;
	}
	return 0;
}

int main() {
	cin >> a;
	for(int i = 0; i < 10; i++) {
		cin >> b;
		m[i] = b;
	}
	for(int i = 0; i <= 70; i+=10) {
		s1 = a.substr((size_t)i, 10);
		cout << solve(s1);
	}
}
