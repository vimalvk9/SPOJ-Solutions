#include <bits/stdc++.h>
using namespace std;

int main()
{
   
   char str[5025];
 

   while(1)
    {
       scanf("%s",str);
       
      // Loop termination condition  

         if(str[0] == '0')
          break;
        
      // The Solution
       
          long long int dp[5025] = {0};
          dp[0] = dp[1] = 1; 
          
          long long int l = strlen(str);

          for(long long int i=2;i<=l;i++)
            {
            	if(str[i-1] != '0')
            	dp[i] = dp[i-1];

            	long long int  c = (str[i-2]-'0')*10 + (str[i-1]-'0');
                
                if(c >= 10 && c <= 26)                  
                   dp[i] += dp[i-2]; 
            }
          printf("%lld\n",dp[l]);  
    }

return 0;
}