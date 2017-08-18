#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

void dfs(int src , vector < pair< int,int > > adj[] , bool vis[] ,vector <int> &dist)
{
   vis[src] = true;
   for(int i=0;i<adj[src].size();i++)
    {
       int u = (adj[src][i]).first;
       int v = (adj[src][i]).second;
  
       if(!vis[u])
        {
           dist[u] = dist[src] + v;
           dfs(u,adj,vis,dist);  
        }
   } 

}

int main(){
  
fast;
int t , n , x , y , w , i;

cin >> t ;

while(t--)
{
cin >> n;
vector < pair< int,int > > adj[n+1];
bool vis[n+1] = {false};
vector <int> dist(n+1,0);

 
for(i=0;i<n-1;i++)
 {
     cin >> x >> y >> w;  
     adj[x].push_back(make_pair(y,w));
     adj[y].push_back(make_pair(x,w));    
 } 

dfs(1,adj,vis,dist);

int new_1 = max_element(dist.begin(),dist.end()) - dist.begin();


for(i=0;i<=n;i++)
  {
    vis[i] = false;
    dist[i] = 0;
  }

dfs(new_1,adj,vis,dist);

cout << *max_element(dist.begin(),dist.end()) << endl;

}
return 0;

}


