#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
int main()
{
	ll i ,t , n;
	scanf("%llu",&t);

	for(i=1;i<=t;i++)
     {
     	scanf("%llu",&n);
     	ll sq = sqrt(n+1);

     	printf("Case %lld: %llu\n",i,sq-1);
     }
return 0;
}