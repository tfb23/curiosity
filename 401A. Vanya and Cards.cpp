//    https://codeforces.com/problemset/problem/401/A


#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int n,x;
    while(scanf("%d%d",&n,&x)!=EOF)
    {
    	int sum=0; 
    	for(int i=0; i<n; i++)
    	{
    		int a; 
    		cin>>a;
    		sum+=a;
    	}
    	sum = abs(sum);
    	if(sum%x!=0)
    	{
    		cout<<sum/x+1<<endl;
    	}
    	else
    	{
    		cout<<sum/x<<endl;
    	}
    }
}
