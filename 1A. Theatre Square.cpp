#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,m,a,r;
    cin>>n>>m>>a;
    r=ceil(m/a)*ceil(n/a);
    printf("%.0lf", r);
    return 0;
}
