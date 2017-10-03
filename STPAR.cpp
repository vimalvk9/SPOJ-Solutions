#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , x ;
    cin >> n;

    while(n)
     {
     	bool flag = 1;
     	stack <int> st;
     	vector <int> v;

     	for(int i=0;i<n;i++)
     	{
     		cin >> x;

     		while(st.size() && st.top() < x)
     		{
     			v.push_back(st.top());
     			st.pop();
     		}

     		st.push(x);
     	}

     	while(!st.empty())
     	{
     		v.push_back(st.top());
     		st.pop();
     	}

     	for(int i=0;i<n;i++)
     	{
     		if(v[i]>v[i+1])
             {
             	flag = 0;
             	break;
             }     			
     	}

     	if(flag)
     		cout << "yes\n";
     	else
     		cout << "no\n";

     	cin >> n;
     }
    
    return 0;
}