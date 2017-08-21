#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
int main()
{
	ll n , w;
	
      while((cin >> n >> w) && (n) && (w))
      {
        
        
        if(n == 0 && w == 0)
          break;

        int wt[n+1];
        int val[n+1];
        int dp[n+1][w+1];

        for(int i=0;i<n;i++)
          cin >> wt[i] >> val[i];
        
        int i , j;
        for(i=0;i<=n;i++)
         {
         	for(j=0;j<=w;j++)
         	{
         		if(i == 0 || j == 0) dp[i][j] = 0;

         		if(wt[i-1] <= w)  dp[i][j] = max(dp[i-1][j],val[i-1]+dp[i-1][j]);
         		else  dp[i][j] = dp[i-1][j];	
         	}
         }

        cout << dp[n][w] << endl;    
	  }
	return 0;  
}
