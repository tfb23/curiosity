//    https://codeforces.com/problemset/problem/1405/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; 
		cin >> n;
		vector<int> a(n);
		for(int &x : a) cin >> x;
		reverse(a.begin(), a.end());
		for(int x : a) cout << x << ' ';
		cout << endl;
	}
}
