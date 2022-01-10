//    https://codeforces.com/contest/1520/problem/C


#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	int n; cin >> n;
	if(n == 2) {
		cout << -1 << endl;
		return;
	}
	int a[n][n];
	if(n % 2 == 1) {
		int k = 1, x = 0;
		while(k <= (n * n)) {
			int i = x / n;
			i = i % n;
			int j = x % n;
			a[i][j] = k;
			k++; 
			x += 2;
		}
	}
	else {
		int k = 1;
		for(int i = 0; i < n; i++) 
			if(i % 2 == 0)
				for(int j = 0; j < n; j+=2) a[i][j] = k++;
			else 
				for(int j = 1; j < n; j += 2) a[i][j] = k ++;
		for(int i = 0; i < n; i++) {
			if(i % 2 == 1)
				for(int j = 0; j < n; j += 2) a[i][j] = k++;
			else {
				for(int j = 1; j < n; j += 2) a[i][j] = k++;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j ++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
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
