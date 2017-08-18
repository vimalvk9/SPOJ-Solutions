#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;

int main()
{ 

  ll t , n;
  scanf("%llu",&t);

  while(t--)
  {
      scanf("%llu",&n);
      n >>= 1;
      printf("%llu\n",n);
  }
  return 0;
}
