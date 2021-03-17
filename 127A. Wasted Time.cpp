//    https://codeforces.com/problemset/problem/127/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	
	double sum=0;
	int x[123], y[123];
	for(int i=0; i<n; i++)
	{
		scanf("%d %d", x+i, y+i);
		if(i)
		{
			sum+=sqrt(pow(x[i]-x[i-1], 2)+(pow(y[i]-y[i-1], 2)));
		}
	}
	printf("%.9lf\n", sum*k/50.0);
}
