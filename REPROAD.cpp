// Warrior aka Vimal Kumar

#include <bits/stdc++.h>
using namespace std;

#define NITRO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)

typedef unsigned long long ll; 

int main()
{
  NITRO

  int t , n , k , i ;
  cin >> t;

  while(t--)
  {
  		cin >> n ;
        
        int arr[n]; 
        int idx , l , r;

        priority_queue < pair<int,int> > pq;
        vector <int> getIndex;

  		for(i=0;i<n;i++)
  		{
  			cin >> arr[i];
  			if(!arr[i])	getIndex.pb(i);		
  		}
      cin >> k;

  		for(i=0;i<getIndex.size();i++)
  		{
            if(getIndex[i] == 0)
          	 l = 0;
          	else
          	 l = getIndex[i]-1;

          	if(getIndex[i] == n-1)   
          	 r = 0;
          	else
          	 r = getIndex[i]+1;
          	 
          	 int a = 0 , b = 0;

          	 while(l >= 0 && arr[l])  a++,l--;
          	 while(r <= n-1 && arr[r])  b++,r++; 
             
             pq.push(make_pair(a+b,getIndex[i]));
           //  cout << getIndex[i] << " " << a << " " << b << endl;  
  		}

      while(!pq.empty() && k)
      {
        pair <int,int> pp = pq.top();        
        arr[pp.ss] = 1;

      /* cout << pp.ff << " " << pp.ss << endl;*/
        
        pq.pop() , k--;
      }
      
    /*  for(i=0;i<n;i++)
        cout << arr[i] << " ";
      cout << endl;*/

     int ct = 0 , ma = 0; 
      for(i=0;i<n;i++)
      {
          if(arr[i] == 0)
          {
             ma = max(ma,ct);
             ct = 0;
          }
          else
             ct++;
      }
     cout << max(ma,ct) << endl;
  }

  return 0;
}