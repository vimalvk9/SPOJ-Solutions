#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
	ll t ,n ;
	vector<ll> v;

	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu",&n);
		v.resize(n);

		for(ll i=0;i<n;i++){
          scanf("%llu",&v[i]);
		}
        
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
		
	    for(ll i=0;i<n;i++)
          printf("%llu ",v[i]);
        printf("\n");
	}
}