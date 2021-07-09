//    https://codeforces.com/contest/1542/problem/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, odd=0, even=0, n;
        cin>>n;
        int N=2*n;
        
        for(int i=0; i<N; i++)
        {
            cin>>x;
            if(x%2==0) even++;
            else odd++;
        }
        if(odd==even) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
