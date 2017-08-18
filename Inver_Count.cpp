#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t , n ;
  cin >> t;

  while(t--)
   {
        cin >> n;
        vector <int> v(n);

        for(int i=0;i<n;i++) cin >> v[i];
 
        int ct = 0;  
        set <int> s;
        s.insert(v[0]);
                    
        set <int> :: iterator it;
 
        for(int i=1;i<n;i++)
         {
              s.insert(v[i]);
              it = s.upper_bound(v[i]);
   
              ct += distance(it,s.end());         

         }   
         cout << ct << endl;
   } 
return 0;

}
