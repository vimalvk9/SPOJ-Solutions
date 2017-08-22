#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll dp[10000001];

void solve()
{
	int i ;
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for(i=4;i<10000001;i++)
		dp[i] = (dp[i-2] + dp[i-3])%1000000007;
}

int main()
{
   ll t , n;
   cin >> t;
   
   solve();

   while(t--)
   {
   		cin >> n;
        cout << dp[n] << endl;
   }

}