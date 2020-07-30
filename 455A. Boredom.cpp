//  https://codeforces.com/contest/455/problem/A


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long int bigInt;
int main()
{

    const int MAX_N=100001;
    int n,x;
    vector<bigInt> dp(MAX_N, 0);
    vector<bigInt> c(MAX_N, 0);

     cin>>n;
     while(n--){
        cin>>x;
        c[x]++;
     }
     dp[0]=0;
     dp[1]=c[1];


    for (int i=2; i<MAX_N;i++)
    {
        dp[i]=max(dp[i-1], dp[i-2]+i*c[i]);
    }
    cout<<dp[MAX_N-1];

    return 0;
}
