//  https://codeforces.com/contest/579/problem/A


#include<iostream>
using namespace std;
int main () {
        int n, ans=0;
        cin>>n;
        n*=2;
        while(n/=2)
            ans +=n%2;
        cout<<ans<<endl;
        return 0;
}
