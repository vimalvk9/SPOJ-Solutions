#include <bits/stdc++.h>
using namespace std;

#define MAX 1000006

typedef long long int ll;

vector <ll> factorSum(MAX);
vector <ll> ans(MAX);

void modfy_sieve()
{
	ll i , j ;

	for(i=2;i<MAX;i++)
		 factorSum[i] = 1;

	for(i=2;i<MAX;i++)
	 {	
	  for(j=2*i;j<MAX;j+=i)
		   factorSum[j] += i; 
     }

   
    ans[0] = ans[1] = 0;

    for(i=2;i<MAX;i++)
     ans[i] = ans[i-1] + factorSum[i];

}

int main()
{
   ll t , n;
   cin >> t >> ws;
   
   modfy_sieve();

   while(t--)
   {
     cin >> n;
     cout << ans[n] << endl;
   }
}
