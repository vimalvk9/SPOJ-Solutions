#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
   ll t , n;
   cin >> t;

   while(t--)
   {
   	 cin >> n;

   	 vector <int> v(n);
   	 unordered_map<int,int> mp;
     ll ma = 0, j;
     for(int i=0;i<n;i++)
     {
     	cin >> v[i];
     	mp[v[i]] = mp[v[i]] + 1;
        
        if(mp[v[i]] > ma)
        {
        	ma = mp[v[i]];
            j = v[i];
        }

     }
     
     if(ma > n/2)
      cout << "YES" << " " << j << endl;
     else
      cout << "NO" <<    

   }
}