//    https://codeforces.com/problemset/problem/1530/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int ans = 0;
		for(int i = 0; i < s.length(); i++) {
			int x = s[i] - '0';
			if(x > ans) 
			ans = x;
		}
		cout << ans << endl;
	}
}
