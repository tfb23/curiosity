// https://codeforces.com/contest/231/problem/A


#include<iostream>
using namespace std;
int main()
{
     int n,p,v,t;

     int c=0;
     cin>>n;
     
     while(n--){
        cin>>p>>v>>t;
        if (p+v+t>=2){
            c+=1;
        }
     }
     
     cout<<c<<endl;
}
