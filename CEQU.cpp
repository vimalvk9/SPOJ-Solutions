#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main()
{
	ull i = 1 , t , a , b , c;
	cin >> t;
  
	while(i <= t )
	{
		cin >> a >> b >> c;
		
        cout << "Case " << i << ":";  
		
		if( c % (__gcd(a,b)) == 0 )
           cout << "Yes\n";
        else
           cout << "No\n"; 
        
        i++;
	} 

    return 0;
}