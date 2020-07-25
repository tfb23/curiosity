//Problem statement link:  https://codeforces.com/problemset/problem/12/A


#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char a[4][4];
	for (int i=1; i<4; i++)
	{
		for (int j=1; j<4; j++)
		{
			cin>>a[i][j];
		}
	}
	if (a[1][1]==a[3][3] && a[2][1]==a[2][3] && a[3][1]==a[1][3] && a[3][2]==a[1][2])
	{
		cout<<"YES"<<endl;
	}
	else 
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
