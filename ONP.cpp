#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
     
       while(t--) 
     {
       	stack < char > s;
        string str;
        
        cin >> str;
        
        int l = str.length();
     
        for(int i=0;i<l;i++)
           {
                if(isalpha(str[i]))
                   cout << str[i];
                else
                  {
                    if( str[i] == ')' )
                       {
                          cout << s.top();
                          s.pop();
                       }                 
                    else
                       {
                          if( str[i] != '(' ) 
                              s.push(str[i]);
                       }
                   }
             }
          cout << endl;
       }
return 0;
}
