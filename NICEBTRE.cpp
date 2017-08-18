#include <bits/stdc++.h>
using namespace std;

int i;

int rec(string &input)
{
     if( input[i] == 'l' )
           return 0;
     else
      {
         i++;
        int l = rec(input);
         i++;
        int r = rec(input);
         
          return max(l,r)+1; 
      }
}

int main()
{
 
 int t;
 
     cin >> t;
     while(t--)
       {
            string input;
            cin >> input;     
            i = 0;
            int ans = rec(input);
            cout << ans << endl;       
       }
return 0;
}
