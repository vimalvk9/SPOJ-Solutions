#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t , n;
   vector <long int> a;
   vector <long int> b;

   while(true)
   {
      cin >> t;     
      if(t == 0) break;
      
      a.clear();
      b.clear();

      for(int i=0;i<2*t;i++)
       {
       	 cin >> n;

       	 if(i < t)
          a.push_back(n);
         else
          b.push_back(n);	
       }

      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      reverse(b.begin(),b.end());

      long int sum = 0;
      for(int i=0;i<t;i++)
       sum += a[i]*b[i];
     cout << sum << endl;
   }
return 0;
}
