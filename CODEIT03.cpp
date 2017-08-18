#include <bits/stdc++.h>
using namespace std;

#define MAX 30

char days[][MAX] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

int dow(int d , int m , int y)
{
  static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
  y -= m<3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d)%7;
}

int main()
{
   int t , d , m , y;
   cin >> t;

   while(t--)
     {
        cin >> d >> m >> y;
        cout << days[dow(d,m,y)] << endl;
     }
  
return 0;
}


