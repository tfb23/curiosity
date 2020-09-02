//    https://codeforces.com/problemset/problem/384/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	printf("%d\n", (n*n+1)/2);
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			printf("%c", (i+j)%2? '.':'C');
		}
		printf("\n");
	}
}
