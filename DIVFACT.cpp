#include <bits/stdc++.h>
using namespace std;

int p[32000];

void sieve(long long int n)
{
    int i , j ;
    for(i=2;i<n;i++)
        p[i]=1;

    for(i=2;i*i<n;i++)
    {
        if(p[i])
        {
            for(j=2*i;j<n;j+=i)
                p[j]=0;
        }

    }


}

int main()
{
	sieve(32000);
	
	int n;
	
	while(scanf("%d",&n) != EOF)
	{
       vector< pair<int,int> > vec;
       pair <int,int> pp;

       for(int i=2;i<=n;i++) 
        {          
            if(p[i]){

               int ct = 0;
               int nn = i , j=n;
               
               while(nn <= j)
                {
                   ct += j/nn;
                   nn *= i; 	
                }
               vec.push_back(make_pair(i,ct)); 
            }
           
        }
        for(int i=0;i<vec.size();i++)
        {
        	if(i != vec.size()-1)
             {
             	 pp = vec[i];
             	cout << pp.first << "^" << pp.second << " * ";
             }
            else
            {
            	pp = vec[i];
            	cout << pp.first << "^" << pp.second;
            } 
        }
        cout << endl;
	}

return 0;	
}