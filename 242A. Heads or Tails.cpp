//    https://codeforces.com/problemset/problem/242/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	
	int cnt = 0;
	for(int i = a; i <= x; i++) {
		int end = min(i - 1, y);
		if(b <= end) cnt += (end - b + 1);
	}
	cout << cnt << endl;
	
		for(int i = a; i <= x; i++) {
			for(int j = b; j <= y; j++) {
				if(i > j) { 
					cout << i << " "<< j << endl;
				}
			}
		}
	}
