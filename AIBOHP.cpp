#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int t;
	string s,xs;

	scanf("%d",&t);

    while(t--) 
      {
         cin >> s;
         xs = s;

         reverse(xs.begin(),xs.end());

         int m = s.size() , n = xs.size() , i , j;
         int L[m+1][n+1];

         for(i=0;i<=m;i++)
         {
         	for(j=0;j<=n;j++)
         	{
         		if(i == 0 || j == 0)
         			L[i][j] = 0;
         		else
         		{
         			if(s[i-1] == xs[j-1])
         				L[i][j] = 1 + L[i-1][j-1];
         			else
         				L[i][j] = max(L[i-1][j],L[i][j-1]);
         		}
         	}
         }

         cout << m - L[m][n] << endl;
     }

	return 0;
}