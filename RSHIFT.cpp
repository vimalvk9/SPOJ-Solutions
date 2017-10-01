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
      n = (n/(long long int)2);
      printf("%llu\n",n);
  }
  return 0;
}
