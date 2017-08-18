#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n , ct = 0;
    scanf("%llu",&n);

	while(1)
	{
	   long long int x = 0;
           while(n)
		{
                  x += (n%10)*(n%10);
                  n /= 10;
                }
           ct++;
           n = x;
           
           if( n / 10 == 0)
              break;
        }

    if( n == 1)
        cout << ct << endl;
    else
        cout << "-1" << endl;

// Success
return 0;
}        	  				
