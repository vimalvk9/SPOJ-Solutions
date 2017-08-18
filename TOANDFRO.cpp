#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int n ; 
    cin >> n;
	
      while(n)
        {
          string s , x;
          cin >> s;
                  
          int l = s.length();
          vector < string > v(l/n);
          int c = 1, i , j;

          for(i=0,j=0;i<l;i+=n,j++)
          {
              x = s.substr(i,n);
              v[j] = x;
          }
            for( j = 0 ;j < l/n ; j++)
             {
                  if( j%2 != 0)
                  reverse(v[j].begin(),v[j].end());
             }
             
             for(j=0;j<n;j++)
             {
                for(i=0;i<l/n;i++)
                cout << v[i][j] ;
       
             }
 cout << endl;
 cin >> n;           
}
     return 0;
}       
                   					
							
							
							
							
							
							
			
			
			
			
			
			
			
			
			
