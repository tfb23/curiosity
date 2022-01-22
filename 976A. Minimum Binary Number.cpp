//    https://codeforces.com/contest/976/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	string s;
	cin >> n >> s;
	if(n == 1) cout << s << endl;
	else {
		int cnt = 0;
		for(int i = 0; i < n; i++) 
			cnt += s[i] == '0';
		cout << 1;
		for(int i = 0; i < cnt; i++) 
			cout << 0;
		cout << endl;
	}
}
