//    https://codeforces.com/contest/1422/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, c;
        cin>>a>>b>>c;
        
        long long r=a+b+c;
        long long ans=r-1;
        cout<<ans<<endl;
    }
}
