#include <bits/stdc++.h>
using namespace std;

typedef long int li;

li arr[1000006];

int prime(li n) 
{          
	 int i;          
	 for(i=2;i*i<=n;i++)
	  {            
		if(n%i == 0)
		  return 0;		  	            				
	  }
	  return 1;          
}          
		      
li phi(li n)
{

	  li res = n;	  
	  for(li i=2;i*i<=n;i++)
	   {
	    	if(n%i == 0)
		    	res -= res/i;
		    while(n%i == 0)
			    n /= i;
	   }   
    	if(n>1)
		res -= res/n;

	    return res; 
    
}

int main()
{
   li t , n;
   scanf("%ld",&t);

   while(t--)
   {
      scanf("%ld",&n);
      
      if(n == 2)
       {
          printf("1\n");
          continue;
       }


      if(n%2 == 0)
       cout << phi(n) << endl;
      else
       {
       	  if(n != 1 && prime(n))
       	  	cout << n-1 << endl;
       	  else
       	  	cout << phi(n) << endl;
       }	

   }
   return 0;
}