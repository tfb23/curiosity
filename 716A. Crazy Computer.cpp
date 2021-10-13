//    https://codeforces.com/problemset/problem/716/A


#include <bits/stdc++.h>
using namespace std;

const int N=1e5;

int main()
{
	long long i, n, c, a[N], cnt=0;
	cin>>n>>c;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i <n; i++) {
		if(i == 0) cnt ++;
		else {
			if(a[i] - a[i - 1] <= c) cnt++;
			else cnt = 1;
		}
	}
	cout << cnt << endl;
}
