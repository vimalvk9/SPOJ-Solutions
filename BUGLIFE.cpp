#include <bits/stdc++.h>
using namespace std;

int v , e;

void dfs(int u,int s,vector<int> &<bool> &visitedsign,vector,vector<int> adj[])
{
  if(!visited[u])   
     {
         vector <int> :: iterator it;
         visited[u] = true;   
         sign[u] = s * (-1);

      for( it = adj[u].begin();it != adj[u].end();it++)
         {
               if(!visited[*it])
                       dfs(*it,sign[u],sign,visited,adj);                                           
         } 
     }
}
int main()
{
   int t , x , y , z;
   cin >> t;

   for( z=1;z<=t;z++)
    { 
       cin >> v >> e;
       
       vector <int> adj[v+1];
       vector <bool> visited(v+1,false);
       vector <int> sign(v+1,1);

       for(int i=0;i<e;i++)
        {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
       
      for(int i=1;i<=v;i++) 
         dfs(i,sign[i],sign,visited,adj);
 
       vector <int> :: iterator it;
       bool flag = false;
       for(int i=1;i<=v;i++) 
         {
               for(it=adj[i].begin();it!=adj[i].end();it++)
                    {
                          if( sign[i] == sign[*it] )
                             {
                                       flag = true;
                                       break;  
                             }
                    }
                 if(flag)
                    break;  
          }
         cout<<"Scenario #" << z <<":\n";
         if(flag)
              cout << "Suspicious bugs found!\n";
         else
              cout << "No suspicious bugs found!\n";
      
      }
return 0;
}

























