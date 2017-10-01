/*#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

int main()
{
	ll t , a , b , n;

	scanf("%llu",&t);
	while(t--)
	{
		scanf("%llu%llu%llu",&a,&b,&n);

		if(n == 1)
			printf("%llu\n",min(a,b));
		else
			if(n == 2)
				printf("%llu\n",max(a,b));
			else
			{
				ll lcm = ( a * b ) / __gcd(a,b);
				ll range = lcm/a + lcm/b - 1;

				ll arr[range] , j = 1;
                arr[0] = 0;

				for(ll i=min(a,b);i<lcm;i++)
				 {
				 	if(i%a == 0 || i%b == 0)
				 		arr[j++] = i;
				 }	
			  
			    ll ans = arr[n%range] + lcm*(floor(n/range));
			    printf("%llu\n",ans);
			}
	}
	return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll_t;
int main() {
	int t;
	scanf("%i", &t);
	while(t--) {
		ll_t a, b, n;
		scanf("%lli %lli %lli", &a, &b, &n);
		ll_t l = a * b / __gcd(a, b), c = (n * l) / ((l / a) + (l / b) - 1);
		ll_t x[4] = {(c/a)*a, (c/a)*a+a, (c/b)*b, (c/b)*b+b};
		for (int i = 0; i < 4; i++) {
			if (x[i]/a + x[i]/b - x[i]/l == n) {
				printf("%lli\n", x[i]);
				break;
			}
		}
	}
}