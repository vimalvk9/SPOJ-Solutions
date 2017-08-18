#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n , m , ans = 100000, i , j;
   int dp[101][101];

   scanf("%d%d",&n,&m);

   for(i=0;i<=n;i++)
   	dp[i][m+1] = dp[i][0] = 100000;

   for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d",&dp[i][j]);

   for(i=1;i<=n;i++)
   		for(j=1;j<=m;j++)
   		   dp[i][j] += min(min(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1]);	

   for(i=1;i<=m;i++)
    		ans = min(ans,dp[n][i]);

             printf("%d\n",ans);
    return 0;
}         