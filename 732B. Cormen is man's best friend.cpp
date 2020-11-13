//    https://codeforces.com/problemset/problem/732/B


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
const int N=555;

int main()
{
	SIS;

    int n, k, i, cnt=0, s, a[N];
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    for(i=1; i<n; i++)
    {
        s=a[i];
        if(a[i]+a[i-1]<k) 
        {
            a[i]=k-a[i-1];
            cnt+=a[i]-s;
        }
    }
    cout<<cnt<<endl;
    for(i=0; i<n-1; i++)
    {
        cout<<a[i]<<" ";
    }

        cout<<a[n-1]<<endl;

}
