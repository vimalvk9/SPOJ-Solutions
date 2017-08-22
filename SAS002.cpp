#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
#define M 1000000007

ll modularExponentiation(ll x,ll n)
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}

void SieveOfEratosthenes(ll n, bool prime[],
                  bool primesquare[], ll a[])
{
    // Create a boolean array "prime[0..n]" and
    // initialize all entries it as true. A value
    // in prime[i] will finally be false if i is
    // Not a prime, else true.
    for (ll i=2; i<=n; i++)
        prime[i] = true;
 
    // Create a boolean array "primesquare[0..n*n+1]"
    // and initialize all entries it as false. A value
    // in squareprime[i] will finally be true if i is
    // square of prime, else false.
    for (ll i=0; i<=(n*n+1); i++)
        primesquare[i] = false;
 
    // 1 is not a prime number
    prime[1] = false;
 
    for (ll p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then
        // it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    ll j = 0;
    for (ll p=2; p<=n; p++)
    {
        if (prime[p])
        {
            // Storing primes in an array
            a[j] = p;
 
            // Update value in primesquare[p*p],
            // if p is prime.
            primesquare[p*p] = true;
            j++;
        }
    }
}
 
// Function to count divisors
ll countDivisors(ll n)
{
    
    if (n==1)
        return 1;
 
    bool prime[n+1], primesquare[n*n+1];
 
    ll a[n]; 
    SieveOfEratosthenes(n, prime, primesquare, a);
 
    
    ll ans = 1;
 

    for (ll i=0;; i++)
    {
    
        if (a[i]*a[i]*a[i] > n)
            break;
 
        ll cnt = 1; 
        while (n%a[i]==0)  
        {
            n = n/a[i];
            cnt = cnt+1; 
        }
 
     
        ans = ans*cnt;
    }
 
    if (prime[n])
        ans = ans*2;
 

    else if (primesquare[n])
        ans = ans*3;
 
    else if (n != 1)
        ans = ans*4;
 
    return ans; 
}
int main()
{
   ll t , n;
   scanf("%llu",&t);

   while(t--)
   {
   		scanf("%llu",&n);
	    ll x = sqrt(n);
        ll y = countDivisors(n);
        if(x*x == n)
	      printf("%llu\n",(modularExponentiation(n,y/2)*x)%M);
        else
          printf("%llu\n",modularExponentiation(n,y/2));	
   }
   return 0;
}