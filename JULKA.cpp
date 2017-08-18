#include <bits/stdc++.h>

using namespace std;

int main()
{
// Declarations

    int t = 1 , i = 0 , j = 0 , m = 0 , n = 0 , o = 0;
    string s1 , s2 ;
    int a[101]={0} , b[101] = {0} , c[101]={0} ;

// For each iteration

    while(t--)
    {
        cin >> s1 ;
        cin >> s2;

        int l1 = s1.length();
        int l2 = s2.length();

// Filling the arrays with numbers 

        for(i=l1-1,j=0;i>=0&&j<l1;i--,j++)
            a[j] = s1[i] - 48;
        for(i=l2-1,j=0;i>=0&&j<l2;i--,j++)
            b[j] = s2[i] - 48;


// Adding the elements
        int l = max(l1,l2);
        int carry = 0;

        for(i=0;i<l;i++)
        {
          c[i] = ( a[i] + b[i] + carry )%10;
          carry = ( a[i] + b[i] + carry )/10;
        }
        if(carry)
        {
           c[l] = carry ;
           i = l;
        }

        else
           i =  l-1;
        while(i>=0)
        {
            cout << c[i];
            i--;
        }

     cout << endl ;

 
  

    }
    return 0;
}

