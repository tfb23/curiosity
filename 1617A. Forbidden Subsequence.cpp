//    https://codeforces.com/contest/1617/problem/A


#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
	string s, t;
	cin >> s >> t;
	sort(s.begin(), s.end());
	unordered_map<char, ll>cnt;
	ll n = s.size();
	for(int i = 0; i < n; i++) cnt[s[i]]++;
	if(t!= "abc" || cnt['a'] == 0 || cnt['b'] == 0 || cnt ['c'] == 0) 
		cout << s << endl;
	
	else {
		string ans = "";
		ans += string(cnt['a'], 'a');
		ans += string(cnt['c'], 'c');
		ans += string(cnt['b'], 'b');
		for(char ch = 'd'; ch <= 'z'; ch++) 
			ans += string(cnt[ch], ch);
		cout << ans << endl;
		}
	}
}
