//    https://codeforces.com/contest/133/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool flag = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') flag = 1;
	}
	if(flag == 1 ) puts("YES");
	else puts("NO");
	return 0;
}
