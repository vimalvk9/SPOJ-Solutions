#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int t , i , ans = 0 , x  ;
	scanf("%ld",&t);

	for( i = 0;i < t; i++) 
	{
	    
         scanf("%ld",&x);
         ans ^= x;
       }
          
       printf("%ld\n",ans);
// Success
return 0;
}                    	
