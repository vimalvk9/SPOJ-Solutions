#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t , n , a , b;
	cin >> t;

	vector <int> fi;
	vector <int> se;

	while(t--)
	{
	   fi.clear();
	   se.clear();

       cin >> n ;
       
       for(int i=0;i<n;i++){
       	cin >> a >> b;
        fi.push_back(a);
        se.push_back(b);
       }
       
       int i1 = max_element(fi.begin(),fi.end()) - fi.begin();
       int i2 = max_element(se.begin(),se.end()) - se.begin();

       if(i1 == i2)
         cout << i1+1 << endl; 
       else
       	 cout << "-1\n";
	}
}