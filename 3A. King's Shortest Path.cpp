//    https://codeforces.com/problemset/problem/3/A


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;

int main()
{
	SIS;
	
	string source, dest;
	cin>>source>>dest;
	
	int horDist, verDist;
	char horLet, verLet;
	
	if(source[0]<dest[0]) 
	{
		horDist=dest[0]-source[0];
		horLet='R';
	}
	
	else
	{
		horDist=source[0]-dest[0];
		horLet='L';
	}
	
	if(source[1]<dest[1])
	{
		verDist=dest[1]-source[1];
		verLet='U';
	}
	
	else
	{
		verDist=source[1]-dest[1];
		verLet='D';
	}
	int numMoves=max(horDist, verDist);
	cout<<numMoves<<endl;
	
	while(numMoves--)
	{
		if(--horDist>=0) cout<<horLet;
		if(--verDist>=0) cout<<verLet;
		cout<<endl;
	}
}
