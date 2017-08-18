#include <bits/stdc++.h>
using namespace std;

long long int power(long int x , long long int n , int m)
{
	if(n == 0)
	   return 1;
	if(n == 1)
	   return x%m;
	   
	if( n%2 == 0)
	   return power((x*x)%m,n/2,m);
	else
	   return (x*power((x*x)%m,(n-1)/2,m))%m;
}

int main(void)
{
	int x ;
        cin >> x;

while(x--)
{ 
        long long int  m;
        string s;
        cin >> s; 	
	scanf("%lld",&m);
	
    printf("%lld\n",power(s[s.length()-1]-'0',m,10));
	
}
return 0;
}
	    
