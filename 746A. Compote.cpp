//    https://codeforces.com/problemset/problem/746/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int res = min(a, min(b / 2, c / 4));
	cout << res * 7 << endl;
}
