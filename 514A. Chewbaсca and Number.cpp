//    https://codeforces.com/contest/514/problem/A


#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	string x;
	cin >> x;
	for(auto& d : x) {
		if(d > '4') {
			d = '9' - d + '0';
		} 
	}
	if(x.front() == '0') x.front() = '9';
	cout << x << endl;
}
