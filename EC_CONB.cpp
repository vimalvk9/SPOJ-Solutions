#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll t , num;
	vector <ll> x;

	cin >> t;
   
    while(t--)
    {
      x.clear();	
      cin >> num;   

      if(num%2 != 0)    
      	cout << num << endl; 
      else
       {
       	 ll m = num;
       	 while(m)
       	 {
       	 	x.push_back(m%2);
       	 	m /= 2;
       	 }
         if(m) x.push_back(m);
         ll ans = 0;  

         ll j = x.size()-1;
       	 for(int i=0;i<x.size();i++,j--)
       	 	{
       	 		ll pp = x[i]*pow(2,j);
       	 		ans += pp;
       	 	
       	 	}
       	 cout << ans <<  endl;
       }  
    }

}
