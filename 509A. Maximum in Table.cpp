//    https://codeforces.com/problemset/problem/509/A


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <queue>
#include <vector>
#include <bitset>
#include <regex>
#define   pi 3.14
#define  SIS std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
const int inf = 0x3f3f3f3f;
const int N=1e5;

int main()
{
	SIS;

    int i, j, n, a[10][10];

    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            a[i][0]=1;
            a[0][j]=1;
        }
    }

    for(i=1; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n-1][n-1]<<endl;
}
