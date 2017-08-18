#include <bits/stdc++.h>
using namespace std;

int main()
{
 
  
   string x , y , z , i , j , e , f;
  
   cin >> x >> y;

         int a = x.length();
         int b = y.length();
         
         if( a==1 && b==1) 
          {
		      if(x==y) 	  
		          cout <<"1\n";
		      else
		          cout <<"0\n";    
		  }
		 else{ 
         if(b%2){
         e = y.substr(0,b/2-1);
         f = y.substr(b/2+1,b-1);
	     } 
         else
         {
		 e = y.substr(0,b/2);	 
	     f = y.substr(b/2,b/2-1);
	     }
         
         int ct = 0;
         for(int k=0;k<=a-b;k++)
            {
                z = x.substr(k,b);
                if(z.length()%2)
                {
				    i = z.substr(0,z.length()/2-1);
				    j = z.substr(z.length()/2+1,z.length()-1); 	
				} 
				else
				{   
					i = z.substr(0,z.length()/2);
				    j = z.substr(z.length()/2,z.length()-1); 	
				} 
				
                if(i == e || j == f)
                   ct++;
            }  
          cout << ct << endl; 
       }
return 0;
}















