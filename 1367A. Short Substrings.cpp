//        https://codeforces.com/contest/1367/problem/A


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	string b; cin >> b;
	string a = b.substr(0, 2);
	for(int i = 3; i < b.size(); i+=2) a += b[i];
	cout << a << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
    	solve();
    }
    return 0;
}
