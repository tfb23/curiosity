//    https://codeforces.com/problemset/problem/483/A


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 65545

ll x, y, z;
int f;

ll gcd(ll a, ll b)
{
	return b?gcd(b, a%b):a;
}

int main()
{
	ll n, m;
	f=0; 
	cin>>n>>m;
	for(ll i=n; i<m; i++)
	{
		for(ll j=i+1; j<=m; j++)
		{
			for(ll k=j+1; k<=m; k++)
			{
				if((gcd(i, j)==1) && (gcd(j, k)==1 && (gcd(i, k)!=1)))
				{
					x=i;
					y=j; 
					z=k;
					f=1;
					break;
				}
			}
			if(f) break;
		}
		if(f) break;
	}
	if(f) printf("%lld %lld %lld\n", x, y, z);
	else printf("-1\n");
}
