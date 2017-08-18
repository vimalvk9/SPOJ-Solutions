#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t , num , ans ;
    cin >> t;
		
	    while(t--)
		{
	          char ch;
                  cin >> num;
                  ans = num;

	  
                  
                  while(1)
		  {
                     cin >> ch;
                     
                     if(ch == '=')
                     break;
                      	   			   				
                     if(ch == '+')
                     {
                        cin >> num;
                        ans += num;
                     }     

		     if(ch == '-')
                     {
                        cin >> num;
                        ans -= num;
                     }     
			    if(ch == '/')
                     {
                        cin >> num;
                        ans /= num;
                     }     
                       if(ch == '*')
                     {
                        cin >> num;
                        ans *= num;
                     }     

                  }
            cout << ans << endl;
}

// Success
	return 0;
}  		  					 
