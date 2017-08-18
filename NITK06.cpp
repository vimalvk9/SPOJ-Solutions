#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
	int t;
	cin >> t;

	ll n;
	vector <ll> v;

	while(t--)
	{
		cin >> n;
		v.resize(n);

		ll x , y , i;
        bool flag = false;

		for(i=0;i<n;i++) cin >> v[i];

        for(i=0;i<n-1;i++)
        {
           x = v[i];
           y = v[i+1];

           v[i] -= min(x,y);
           v[i+1] -= min(x,y);
        }
	    
	    for(i=0;i<n;i++)
	      {
	      	if(v[i])
	      	{
	          flag = true;
	      	  break;
	        }
	      } 

	    if(flag)
	      cout << "NO\n";
	    else
	      cout << "YES\n";    
	}

  return 0;	
}