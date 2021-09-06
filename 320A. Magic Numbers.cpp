//    https://codeforces.com/problemset/problem/320/A


#include <bits/stdc++.h>
#include <string>
using namespace std;

bool is_magical(string s) {
	for(int i = 0; i < (int)s.size(); i++) 
		if(s[i] != '1' && s[i] != '4') return false;
		
		if(s[0] == '4') return false;
		if(s.find("444") != s.npos) return false;
		
		return true;
}

int main() {
	string s;
	cin >> s;
	if(is_magical(s)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
