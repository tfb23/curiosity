//    https://codeforces.com/contest/246/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin>>n;
    
    if(n>2) 
    {
        for(i=2; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<1<<endl;
    }
    else cout<<-1<<endl;
}
