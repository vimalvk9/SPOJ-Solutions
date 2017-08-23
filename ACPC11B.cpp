#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  
  ll t , n , num;
  cin >> t;
   
  vector <ll> a;
  vector <ll> b;

  while(t--){

    cin >> n;
    a.resize(n);   
    
    for(int i=0;i<n;i++)
     	cin >> a[i];

    cin >> num;
    b.resize(num);

    for(int i=0;i<num;i++)
     	cin >> b[i];

    ll ans = 1000001;
    
    for(int i=0;i<n;i++)
   	  for(int j=0;j<num;j++)
    	 ans = min(ans,abs(a[i]-b[j]));
          
   cout << ans << endl;	

  }

}