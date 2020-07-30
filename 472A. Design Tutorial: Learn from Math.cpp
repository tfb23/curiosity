//  https://codeforces.com/problemset/problem/472/A


#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x%2==0)
	{
		cout <<4<<" "<<x-4<<endl;
	}
	else 
	{
		cout<<9<<" "<<x-9<<endl;
	}
}
