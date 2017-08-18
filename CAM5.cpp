#include <bits/stdc++.h>
using namespace std;

void dfs(int i,vector <int> adj[],vector <bool> &visited)
{
    vector<int> :: iterator it;
    visited[i] = true; 
    
    for(it = adj[i].begin();it!=adj[i].end();it++) 
     {
           if(!visited[*it])
                dfs(*it,adj,visited);
     }
}

int main()
{
 int t , v , e , x , y ;
 cin >> t;

 while(t--)
  {
      cin >> v >> e;
      
      vector <int> adj[v];
      vector <bool> visited(v,false); 
      vector <int> :: iterator it;
         
      for(int i=0;i<e;i++)
       {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);     
       }      
  
      int count = 0;     
      for(int i=0;i<v;i++)
        {
            if(!visited[i])
             {
              dfs(i,adj,visited);
              count++;
             }  
        }
      cout << count << endl;
   }
return 0;
}


