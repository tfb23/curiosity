//    https://codeforces.com/problemset/problem/931/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, l, cnta=0, cntb=0;

    cin>>a;
    cin>>b;

    l=abs(a-b);

    cnta=l/2;
    cntb=(l-(l/2));

    cout<<(cnta*(cnta+1)/2)+(cntb*(cntb+1)/2)<<endl;
}
