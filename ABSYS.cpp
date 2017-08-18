#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string a , b , c ,d , e ;

	cin >> t >> ws;

	while(t--)
	{
		cin >> a >> ws >> b >> ws >> c >> ws >> d >> ws >> e  ;
		
		int i , check = 0;
		
		for(i=0;i<a.size();i++)
		{
           if(a[i] == 'm')
           {
              check = 1;
              break; 
           }
		}

        for(i=0;i<b.size();i++)
		{
           if(b[i] == 'm')
           {
              check = 2;
              break; 
           }
		}
          
        for(i=0;i<c.size();i++)
		{
           if(c[i] == 'm')
           {
              check = 3;
              break; 
           }
		}

        int fi , se , th;

		if(check == 1)
		{
           se = stoi(c);
           th = stoi(e);
           fi = th - se;

           cout << fi << " " << b << " " << c << " " << d << " " << e << endl;  
		}
		else
		{
			if(check == 2)
			{
				fi = stoi(a);
				th = stoi(e);
				se = th - fi;
          
                cout << a << " " << b << " " << th-fi << " " << d << " " << e << endl;  	
			}
			else
			{
				fi = stoi(a);
				se = stoi(c);
                th = fi + se;

				cout << a << " " << b << " " << c << " " << d << " " << th << endl;
			}	 
		}


	}
return 0;
}