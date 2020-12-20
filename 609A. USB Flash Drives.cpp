//    https://codeforces.com/problemset/problem/609/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, m, a[1234], cnt=0;
    
    cin>>n>>m;
    
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    for(i=n-1; i>=0; i--)
    {
        m-=a[i];
        cnt++;
        if(m<=0)
        {
            break;
        }
    }
    cout<<cnt<<endl;
}
