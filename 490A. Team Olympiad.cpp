//    https://codeforces.com/problemset/problem/490/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n;
	cin>>n;
	
	int num[5678];
	
	queue<int> q1;
	queue<int> q2;
	queue<int> q3;
	
	for(i=1; i<=n; i++)
	{
		cin>>num[i];
		
		if(num[i]==1) q1.push(i);
		else if(num[i]==2) q2.push(i);
		else if(num[i]==3) q3.push(i);
	}
	
	int mini=min(q1.size(), min(q2.size(), q3.size()));
	cout<<mini<<endl;
	
	if(mini!=0)
	{
		for(i=1; i<=mini; i++)
		{
			cout<<q1.front()<<" "<<q2.front()<<" "<<q3.front()<<endl;
			q1.pop();
			q2.pop();
			q3.pop();
		}
	}
}
