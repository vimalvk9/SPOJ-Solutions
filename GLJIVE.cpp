#include <bits/stdc++.h>

using namespace std;

int main()
{
 
 vector <int> v(10);
 int sum = 0 , i;

 for( i=0;i<10;i++)
      cin >> v[i];

 for( i=0;i<10;i++)
     {
         sum += v[i];
         
         if(sum>=100)
            break;      
     } 
     
    if(sum == 100)
      cout << sum << endl;
    else
      {
        if( sum-100 == 100-(sum-v[i]) )
           cout << sum << endl;
        else
           {
             if( sum-100 < 100-(sum-v[i]) )
               cout << sum << endl; 
             else
               cout << sum-v[i] << endl;        
           }
       }

return 0;
}
