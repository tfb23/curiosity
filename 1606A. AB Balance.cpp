//    https://codeforces.com/contest/1606/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		if(s[0] != s[n - 1]) s[0] = s[n - 1];
		cout << s << endl;
	}
}
