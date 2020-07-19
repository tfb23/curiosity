#include <iostream>
using namespace std;

int main()
{
	int n, p;
	cin>>n>>p;
	int min(p), max(p), a(0);
	while(--n)
	{
		cin>>p;
		if(p<min)
		{
			min=p;
			++a;
		}
		if (p>max)
		{
			max=p;
			++a;
		}
	}
	cout<<a<<endl;
	return 0;
}
