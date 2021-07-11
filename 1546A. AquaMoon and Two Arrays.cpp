//    https://codeforces.com/problemset/problem/1546/A


#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, k=0;
		cin >> n;
		int a[123], b[123];
		for (int i=1; i<=n; i++) cin>>a[i];
		for (int i=1; i<=n; i++) cin>>b[i];

		for (int i=1; i<=n; i++) k+=abs(a[i]-b[i]);
		if (k%2)
		{
			cout << "-1" << endl;
			
		}
		else 
		{
			cout << k/2 << endl;
			for (int i=1; i<= n; i++) {
				if (a[i] == b[i]) continue;
				if (a[i] > b[i]) for (int j= 1; j<= n; j++) if (i!=j && a[j] < b[j]) 
				{
					int x = a[i] - b[i];
					int y = b[j] - a[j];
					if (x > y)
					{
						a[i]-=y;
						a[j]+=y;
						for (int l= 1; l<=y; l++) cout<<i<<" "<<j<<endl;
					}
					else 
					{
						a[i]-=x;
						a[j]+=x;
						for (int l = 1; l <= x; l++) cout <<i<<" "<<j<<endl;
					}
					if (x == 0) break;
				}
			}
		}
	}
}
