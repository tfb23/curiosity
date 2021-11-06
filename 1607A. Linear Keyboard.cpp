//    https://codeforces.com/contest/1607/problem/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string k, s;
		cin >> k >> s;
		unordered_map<char, int>m;
		for(int i = 0; i < 26; i++) 
			m[k[i]] = i;
		int dif = 0;
		for(int i = 0; i <s.size() - 1; i++) 
		dif = dif + abs(m[s[i]] - m[s[i + 1]]);
		cout << dif << endl;
		dif = 0;
		m.clear();
	}
}
