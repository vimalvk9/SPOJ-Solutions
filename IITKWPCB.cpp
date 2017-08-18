#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main()
{
    ull t , n , ans;
    scanf("%llu",&t);

    while(t--)
     {
     	scanf("%llu",&n);
        
        ans = floor(n/2);

     	while(ans >= 1)
     	{
     		if(__gcd(ans,n)==1)
     			break;
     		ans--;
     	}
     	printf("%llu\n",ans);
     }
    return 0; 
}