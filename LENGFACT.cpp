// Kamenetsky formula

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll findDigits(ll n)
{

	  if(n <= 1)
        return 1;

      double digits = 0;
      digits = ((n*log10(n/M_E) + log10(2*M_PI*n)/2.0));

      return floor(digits) + 1;
}

int main()
{
   ll t , n;
   cin >> t ;

   while(t--)
   {
   	 cin >> n;
   	 cout << findDigits(n) << endl;
   }
}