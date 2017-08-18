#include <bits/stdc++.h>
using namespace std;

int main()
{
   int V , E , x , y ;
   scanf("%d",&V);
   
   E = V-1;
   vector <int> adj[V];
   vector <bool> visited(V,false);
   vector <int> level(V,0);  
   queue <int> bfsq;

   for(int i=0;i<E;i++)
     {
         scanf("%d%d",&x,&y);
         adj[x-1].push_back(y-1);
         adj[y-1].push_back(x-1);
     }
   
   visited[0] = true;
   level[0] = 0;
   bfsq.push(0);

   while(!bfsq.empty())
   {
        int x = bfsq.front();
        bfsq.pop();
      //  cout << "Visited -> " << x+1 << " " << "Level -> " << level[x] << endl ;
        vector <int> :: iterator it; 
          
        for(it = adj[x].begin();it != adj[x].end();it++)
         {
               if(!visited[*it])
                 {
                   visited[*it] = true;
                   bfsq.push(*it);
                   level[*it] = level[x] + 1;   
                 }
         }   
   }  
   int rm = max_element(level.begin(),level.end()) - level.begin();
  
   for(int i=0;i<V;i++)
     {
         level[i] = 0;
         visited[i] = false;
     }
   
   visited[rm] = true;
   level[rm] = 0;
   bfsq.push(rm);   

     while(!bfsq.empty())
       {
          int x = bfsq.front();
          bfsq.pop();
          //  cout << "Visited -> " << x+1 << " " << "Level -> " << level[x] << endl ;
        vector <int> :: iterator it; 
          
        for(it = adj[x].begin();it != adj[x].end();it++)
         {
               if(!visited[*it])
                 {
                   visited[*it] = true;
                   bfsq.push(*it);
                   level[*it] = level[x] + 1;   
                 }
         }   
   }  
   int m = max_element(level.begin(),level.end()) - level.begin();
   printf("%d\n",level[m]);   
}

