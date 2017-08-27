#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

#define MOD 10000007


ll modExpo(ll x , ll n)
{
	if(n == 0)
		return 1;
	else
		if(n%2 == 0)
			return modExpo((x*x)%MOD,n>>1);
		else
			return (x*modExpo((x*x)%MOD,(n-1)>>1))%MOD;
}

int main()
{
	ll n , k;
	while(1)
	{
		scanf("%llu%llu",&n,&k);
		
		if(n == 0 && k == 0)
         break;
       printf("%llu\n", (modExpo(n,k)%MOD + modExpo(n,n)%MOD + (2*modExpo(n-1,k))%MOD + (2*modExpo(n-1,n-1))%MOD)%MOD); 
	}
}