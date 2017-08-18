#include <bits/stdc++.h>
using namespace std;

#define pi  3.14159
typedef unsigned long long int ull;

int main()
{
   int l;
   double r , area;

   while(1)
   {
   	 cin >> l;
   	 
   	 if(l==0)
      break;

     r = l/pi;
     area = (pi*r*r)/2;

     printf("%0.2f\n",area);
   }
  return 0; 
}