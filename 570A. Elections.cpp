//     https://codeforces.com/problemset/problem/570/A



#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <set>
#include <cstdlib>

using namespace std;

const int maxn=100+5;
int vote[maxn][maxn];
int candidate[maxn];


int main()
{
	int n, m; 
	while(cin>>n>>m)
	{
		memset(candidate, 0, sizeof(candidate));
		for(int i=0; i<m; i++)
		{
			int Max=0;
			for(int j=0; j<n; j++)
			{
				cin>>vote[i][j];
				if(vote[i][j]>vote[i][Max])
				Max=j;
			}
			candidate[Max]++;
		}
		int win=0; 
		for(int i=0; i<n; i++)
		{
			if(candidate[i]>candidate[win])
			win=i;
		}
		cout<<win+1;
	}
	
	
}
