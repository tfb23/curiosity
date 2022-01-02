//    https://codeforces.com/contest/1618/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<string> bigrams(n - 2);
		for(auto &b : bigrams) cin >> b;
		string str = bigrams[0];
		bool flag = false;
		
		for(int i = 1; i < n - 2; i++) {
			if(str.back() != bigrams[i].front()) {
				flag = true;
				str += bigrams[i];
			}
			else
				str += bigrams[i].back();
		}
		
		if(!flag) str += 'a';
		cout << str << endl;
	}
	return 0;
}
