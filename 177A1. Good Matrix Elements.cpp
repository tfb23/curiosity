//    https://codeforces.com/problemset/problem/177/A1


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a, n, sum=0;
    
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a;
           if (i == j ||i + j == n - 1 || i == (n - 1)/2 || j == (n - 1)/2) 
           {
               sum+=a;
           }
        }
        
    }
    cout<<sum<<endl;
}
