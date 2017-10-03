// Warrior aka Vimal Kumar

#include <bits/stdc++.h>
using namespace std;

#define NITRO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)

typedef unsigned long long ll; 


int main()
{
  NITRO
  int t , num , sum = 0;
  cin >> t;

  while(t--)
  {
  	cin >> num;
  	if(num > 0) sum += num;
  }
  cout << sum << endl;
  return 0;
}
