#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
  ll t , a , b;
  scanf("%lld",&t);

  while(t--)
  {
  	scanf("%lld%lld",&a,&b);

  	if(__gcd(a,b) == 1)
  		printf("1\n");
  	else
  	{
  		ll mi = __gcd(a,b) , ct =0 , g = __gcd(a,b);

  		for(ll i=1;i*i<=mi;i++)
          {
              if(g%i == 0)
                ct+=2;
              if(i*i == g)
              	ct--;              
          }
        printf("%lld\n",ct); 
  	}
  }

}