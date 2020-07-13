#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;
const int Max = 370;
int n, a[Max], b[Max], l, r;
char temp;

int main()
{
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>temp>>l>>r;
		if(temp=='M')
		{
			for (int j=l; j<=r; j++)
			{
				a[j]++;
			}
		}
		else 
		{
			for (int j=l; j<=r; j++)
			{
				b[j]++;
			}
		}
		
	}
		int ans = 0; 
		for (int i=1; i<=Max; i++)
		{
			ans = max(ans, min (a[i], b[i]));
		}
		cout <<2*ans<<endl;
		return 0;
}
