//    https://codeforces.com/problemset/problem/1183/A


#include <bits/stdc++.h>
using namespace std;

int sum(int a) {
	int res = 0;
	cin >> a;
	while(a > 0) {
		res += a % 10;
		a /= 10;
	}
	return res;
}

int main() {
	int a;
	cin >> a;
	while(sum(a) % 4 != 0) {
		a++;
	}
	cout << a << endl;
}
