//    https://codeforces.com/contest/1547/problem/A


#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 0; i < t; ++i)
	{
		int xa, ya, xb, yb, xf, yf, d;
		cin >> xa >> ya >> xb >> yb >> xf >> yf;
		d= abs(xa - xb) + abs(ya - yb);
		if((xa == xb && xa == xf && ((ya < yf && yf < yb) || (yb < yf && yf < ya))) || (ya == yb && ya == yf && ((xa < xf && xf < xb) || (xb < xf && xf < xa))))
		{
			d+= 2;
		}
		cout<<d<<endl;
	}
}
