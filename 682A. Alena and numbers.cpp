//    https://codeforces.com/contest/682/problem/A


#include <iostream> 
using namespace std ; 

int main ()
{
	long long n , m , sum ( 0 ); 
	cin >> n >> m ; 
	for ( int i = 1 ; i <= n ; i ++) 
	{
		sum + = ( i + m ) / 5 - i / 5 ;
	}
	cout << sum << endl ;
	return 0 ; 
}
