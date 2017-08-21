#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;
#define size 10000

ull tot[size+1];

void euler_tot()
{
   tot[1] = 1;
   
   for(ull i=2;i<size;i++)
   {
     if(!tot[i])
     {
     	tot[i] = i-1;
     	for(ull j=i<<1;j<size;j+=i)
     	{
     		if(!tot[j]) tot[j] = j;
     		tot[j] = (tot[j]/i)*(i-1);
     	}
     }
   }
   for(ull i=2;i<=size;i++)
   	tot[i] += tot[i-1];
}

int main()
{
 ull t , n;
 scanf("%llu",&t);
 euler_tot();

 while(t--)
 {
 	scanf("%llu",&n);
 	printf("%llu\n",tot[n]*tot[n]);
 } 
return 0;
} 