#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

vector <ull> prime;

bool check[50010];
bool seg[1000009];
int sz = 1;

void precompute()
{
	check[1] = true;
	for(int i=3;i<=224;i+=2)
	{
		if(!check[i])
		for(int j=i*i;j<=50000;j+=2*i)
            check[j] = true;
	}

	prime.push_back(2);
	sz=1;
	for(int i=3;i<=50000;i++)
	{
		if(check[i] == false && (i&1))
			prime.push_back(i) , sz++;
	}
}

int main()
{
    ull t;
    scanf("%llu",&t);
    precompute();

    while(t--)
    {
    	ull a , b;
    	scanf("%llu%llu",&a,&b);

    	if(b <= 500000)
    	{
    		if(a<=2)
    			printf("2\n");
    		for(ull i=a;i<=b;i++)
    		{
    			if(check[i] == false && (i&1))
    				printf("%llu\n",i);
    		}
    		continue;
    	}
    	
    	memset(seg , 0 , sizeof seg);

        for(ull i = 0; prime[i]*prime[i] <= b ; i++)
        {
            ull begin = a/prime[i];
            begin *= prime[i];
            for(ull j = begin ; j<= b ; j+= prime[i]){
                if(j < a)
                    continue;
                seg[j - a] = true;
            }
        }
        for(ull i  = 0 ; prime[i]*prime[i] <= b ; i++){
            if(prime[i]>= a && prime[i]<=b)
                printf("%llu\n",prime[i]);
        }
        for(int i = a==1?1:0 ; i < b-a+1 ; i++)
            if(seg[i]==0)
                printf("%llu\n", i+a);
    }
}