//    https://codeforces.com/contest/1619/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		set<int> st;
		for(int i = 1; i  * i <= n; i++)
			st.insert(i * i);
		for(int i = 1; i * i * i <= n; i++) 
			st.insert(i * i * i);
		cout << st.size() << endl;
	}
	return 0;
}
