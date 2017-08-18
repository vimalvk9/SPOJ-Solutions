#include <bits/stdc++.h>
using namespace std;

int main()
{

ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

int n , m , x;
set <int> a;
set <int> b;
   
           cin >> n;
           while(n--)
                {
                     cin >> x;
                     a.insert(x);

                        cin >> m;  
                        while(m--)
                             {
                                  cin >> x; 
                                  b.insert(x);
                             }
                                             
                }   
           int ct = b.size();
           set <int> :: iterator itr; 
           for(itr = a.begin(); itr != a.end(); itr++ )
             {
                  if( b.find(*itr) != b.end() )
                       ct--;                        
             }   
           cout << ct << endl;  
           

return 0;
}
