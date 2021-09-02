//    https://codeforces.com/contest/205/problem/A


#include <bits/stdc++.h>
using namespace std;


int main() {
long long n,min,t=0,c=1;
cin>>n;
int a[n];
cin>>a[0];
min=a[0];
for(int i=1;i<n;i++)
{
	cin>>a[i];
	if(a[i]<min)
	{
		min=a[i];
		t=i;
		c=1;
	}
	else if(a[i]==min)
	c++;
}
if(c==1)
cout<<t+1;
else
cout<<"Still Rozdil";

	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    ll n;
    cin>>n;
    vector<pair<ll, ll>> a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i].first;
        a[i].second = i+1;
    }
    if(n==1)
    {
        cout<<"1\n";
        return 0;
    }
    sort(a.begin(), a.end());
    if(a[0].first == a[1].first)
    {
        cout<<"Still Rozdil\n";
    }
    else
    {
        cout<<a[0].second<<"\n";
    }
    return 0;
}


