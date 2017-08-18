#include <bits/stdc++.h>

using namespace std;

int a[50];

int main()
{
    int t;
    scanf("%d",&t);
   
    string s;
    while(t--)
	{
           int ans = 0 , i = 0;
           cin >> s;
           
           while(i<s.length())
               {
                  ans += (s[i]-'0');
                  i++;
               }
           printf("%d\n",ans);
         }
return 0;
}            	   	
