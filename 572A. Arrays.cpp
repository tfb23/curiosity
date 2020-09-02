//    https://codeforces.com/problemset/problem/572/A


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5;
int main()
{
    int na,nb;
    int k,m;
    int a[N+5],b[N+5];
    cin>>na>>nb;
    cin>>k>>m;
    for(int i=0;i<na;i++)
       {
       cin>>a[i];
       }
    for(int i=0;i<nb;i++)
        {
        cin>>b[i];
        }
    
    
       //  without sorting:
      //  if(a[k] < b[nb-m+1]) printf("YES\n");  
     //  else printf("NO\n");
    
    
    sort(a, a+na);            
    sort(b, b+nb);
    reverse(b, b+nb);
    if(a[k-1]<b[m-1])
        {
        cout<<"YES"<<endl;
        }
    else
        {
        cout<<"NO"<<endl;
        }
    return 0;
