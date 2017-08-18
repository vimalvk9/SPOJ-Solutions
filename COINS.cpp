#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;
 
map <long long , long long> ans;

long long f( long long n)
{
   if( n==0 )
         return 0;
   if( ans[n] != 0)
         return ans[n];
   else
      {
        long long x = f(n/2) + f(n/3) + f(n/4);
        if( x > n) 
           ans[n] = x;
        else
           ans[n] = n;
      }
return ans[n];
}

int main()
{
           long long n;
                     while(scanf("%lld",&n)==1) 
                             printf("%lld\n",f(n));
        
return 0;
}          
   
