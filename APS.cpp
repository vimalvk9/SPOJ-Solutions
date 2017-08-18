#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll spf[10000007];
ll ans[10000007];

void sieve()
{
  ll i , j;
  
  spf[1] = 1;

  for(i=2;i<10000007;i+=2)
   spf[i] = 2;

  for(i=3;i<10000007;i+=2)
  {
  	if(spf[i] == 0)
  	{
  		spf[i] = i;
  		for(j=2*i;j<10000007;j+=i)
  		  if(spf[j] == 0)
  		   spf[j] = i;
  	}
  }

  ans[0] = ans[1] = 0;
  
  for(i=2;i<10000007;i++)
   ans[i] = ans[i-1] + spf[i];

}

int main()
{
	int t;
	ll n;
    
	cin >> t;

    sieve();

	while(t--)
	{
       cin >> n;
       cout << ans[n] << endl;
	}
  return 0; 
}