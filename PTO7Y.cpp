#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10001];

int V , E ;

vector <bool> visited(10001,false);

bool isCyclic(int v , int parent);

bool isTree();

int main()
{
  int x , y ; 
  scanf("%d%d",&V,&E);

  for(int i=0;i<E;i++)
  {
        scanf("%d%d",&x,&y); 
        adj[x].push_back(y);
        adj[y].push_back(x);
  }
  
  (isTree()) ? cout << "YES\n" : cout<<"NO\n" ; 

return 0; 
}

bool isCyclic(int v , int parent)
{
    // Mark the current node as visited
    visited[v] = true;
 
    // Recur for all the vertices adjacent to this vertex
    vector <int> ::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        // If an adjacent is not visited, then recur for 
        // that adjacent
        if (!visited[*i])
        {
           if (isCyclic(*i , v))
              return true;
        }
 
        // If an adjacent is visited and not parent of current
        // vertex, then there is a cycle.
        else
           if (*i != parent)
           return true;
    }
    return false;
}
 
// Returns true if the graph is a tree, else false.
bool isTree()
{
    // Mark all the vertices as not visited and not part of 
    // recursion stack
    
    for (int i = 1; i <= V; i++)
        visited[i] = false;
 
    // The call to isCyclicUtil serves multiple purposes.
    // It returns true if graph reachable from vertex 0 
    // is cyclcic. It also marks all vertices reachable 
    // from 0.
    if (isCyclic(1,-1))
             return false;
 
    // If we find a vertex which is not reachable from 0 
    // (not marked by isCyclicUtil(), then we return false
    for (int u = 1; u <= V; u++)
        if (!visited[u])
           return false;
 
    return true;
}
