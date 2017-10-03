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
  int n , k , i , j;
  cin >> n;

  int arr[n];
  for(i=0;i<n;i++)
  	cin >> arr[i];
  cin >> k;
  for(i=0;i<n-k+1;i++)
   {
   	 j = 0;
   	 int ma = -1;
   	 while(j < k)
   	 {
         ma = max(ma,arr[j+i]);
         j++;
   	 }
   	 cout << ma << " ";
   }
  cout << endl; 
  return 0;
}