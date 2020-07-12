#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
const int Max=105; 
char a[Max][Max];

int main()
 {
 	int n; 
 	cin>>n; 
 	for (int i=0; i<n; i++)
 	{
 		cin>>a[i];
 	}
 	int ans = 0; 
 	int sum = 0; 
 	for (int i=0; i<n; i++)
 	{
 		for (int j=0; j<n; j++)
 		{
 			if (a[i][j]=='C')
 			sum++;
 		}
 		ans+=(sum-1)*sum/2;
 		sum = 0; 
 	}
 	for (int i=0; i<n; i++)
 	{
 		for (int j=0; j<n; j++)
 		{
 			if (a[j][i]=='C')
 			sum++;
 		}
 		ans+=(sum-1)*sum/2;
 		sum=0;
 	}
 	cout<<ans<<endl;
 	return 0;
 }
