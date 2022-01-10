//    https://codeforces.com/contest/1520/problem/A


#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	string s; 
	cin >> s;
	vector<int> a(26, 0);
	a[s[0] - 'A'] = 1;
	for(int i = 1; i < n; i++) {
		if(s[i] == s[i - 1]) continue;
		else {
			if(a[s[i] - 'A'] > 0) {
				cout << "NO\n";
				return;
			}
			a[s[i] - 'A'] = 1;
		}
	}
	cout << "YES\n";
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
    return 0;
}
