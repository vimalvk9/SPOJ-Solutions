#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;
int main()
{
      
    ll t , n;
    
    vector <ll> v; 
    cin >> t;
    
    while(t--)
    {
        cin >> n;
           
        v.resize(n);


        for(ll i=0;i<n;i++)
          cin >> v[i] ;	
       
        if(!next_permutation(v.begin(),v.end()) )
         {
            cout << "-1\n";
         }
        else
         {
            for(ll i=0;i<n;i++)
                cout << v[i];
            cout << endl;
         }  
        
    	  	 
    }
  
 return 0;
}