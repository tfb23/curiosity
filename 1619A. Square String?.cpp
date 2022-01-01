//    https://codeforces.com/contest/1619/problem/A


#include <bits/stdc++.h>
using namespace std;     
  int main() {
  int t;
   	cin >> t;
   	while(t--) {
    	string s;
    	cin >> s;
    	bool flag = 1;
    	if(s.length() % 2 == 0) {
    		for(int i = 0; i <s.length() / 2; i++) {
    			if(s[i] != s[i + s.length() /2 ]) flag = 0;
    	}
   	}
   		else flag = 0;
    	cout <<(flag ? "YES" : "NO") << endl;
    }
   }
