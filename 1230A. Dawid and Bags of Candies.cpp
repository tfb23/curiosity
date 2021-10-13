//    https://codeforces.com/problemset/problem/1230/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5];
	for(int i = 0; i < 4; i++) cin >> a[i];
	sort(a, a + 4);
	if((a[3] == (a[0] + a[1] + a[2])) || (a[0] + a[3] == a[2] + a[1]))
	cout << "YES" << endl;
	else cout << "NO" << endl;
}
