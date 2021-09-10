//    https://codeforces.com/problemset/problem/219/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, count = 0;
	char ch;
	string s;
	cin >> k >> s;
	int l = s.size();
	sort(s. begin(), s.begin()+s.size());
	for(int i = 0; i < l; i++) {
		if(i % k == 0) ch = s[i];
		if(s[i] == ch) count++;
	}
	
	if(l == count && count % k == 0) {
		for(int i = 0; i < k; i++) {
			for(int l = 0; l < s.size(); l+=k) {
				cout << s[l];
			}
		}
	}
	else cout << "-1" << endl;
	
}
