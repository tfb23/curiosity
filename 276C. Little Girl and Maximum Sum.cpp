//    https://codeforces.com/problemset/problem/276/C


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

using namespace std;
const long long N=2e5+5;
long long i, n, q, l, r, a[N], b[N], ans;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>q;
    
    for(i=0; i<n; i++)
    {
    	cin>>a[i];
    	b[i]=0;
    }
    sort(a, a+n);
    while(q--)
    {
    	cin>>l>>r;
    	b[l-1]++;
    	b[r]--;
    }
    for(i=1; i<n; i++)
    {
    	b[i]=b[i-1]+b[i];
    }
    sort(b, b+n);
    ans=0; 
    for(i=0; i<n; i++)
    {
    	ans+=a[i]*b[i];
    }
    cout<<ans;
}
