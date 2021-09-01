//    https://codeforces.com/problemset/problem/59/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int countlow = 0, countup = 0;
	for(int i = 0; i < s.size(); i++) {
		if(isupper(s[i])) countup++;
		else countlow++;
	}
	
	if(countup > countlow) {
		char c;
		for(int i = 0; i < s.size(); i++) {
			c = toupper(s[i]);
			cout << c;
		}
	}

		else
		{
			char c;
			for(int i = 0; i < s.size(); i++) {
				c = tolower(s[i]);
				cout << c;
			}
		}
}
