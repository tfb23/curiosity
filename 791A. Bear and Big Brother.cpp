//    https://codeforces.com/problemset/problem/791/A


#include <bits/stdc++.h>
using namespace std;
int main() {
	int i, a, b; 
	cin >> a >> b;
	for(i = 1; i <= 10; i++) {
		a *= 3;
		b *= 2;
		if(a > b) break;
	}
	cout << i << endl;
}
