//    https://codeforces.com/problemset/problem/1060/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, cnt=0;
    char s[123];
    
    cin>>n;
    cin>>s;
    
    for(i=0; i<n; i++)
    {
        if(s[i]=='8') cnt++;
    }
    int r;
    r=min(n/11, cnt);
    
    cout<<r<<endl;
}
