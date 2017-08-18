#include <bits/stdc++.h>
using namespace std;

unordered_map<int,string> mymap; 

void rec(int n)
{
   vector <int> x;
   int nn = n;

   if(nn == 0)
   	

   while(nn)
   {
   	 x.push_back(nn%2);
   	 nn /= 2;
   }
   
   reverse(x.begin(),x.end());

   for(int i=0;i<x.size();i++)
   	{
   		if(x[i])
   		{

   		}
   	
   	}
   
}

int main()
{
	for(int i=0;i<16;i++)
      {
      	rec(nums[i]);
      /*	cout << sol << endl;
      	sol="";*/
      }
}