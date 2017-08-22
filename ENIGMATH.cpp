#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
   ll t , a , b;
   cin >> t;

   while(t--)
   {
   	  cin >> a >> b;
   	  ll g = __gcd(a,b);

   	  cout << b/g << " " << a/g << endl;
   }
   return 0;
   
}