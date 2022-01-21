//    https://codeforces.com/contest/991/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	int n1 = a - c;
	int n2 = b - c;
	int n3 = c;
	int n4 = n - n1 - n2 - n3;

	if (n1 >= 0 && n2 >= 0 && n3 >= 0 && n4 > 0)
		cout << n4 << endl;
	else
		cout << -1 << endl;
}
