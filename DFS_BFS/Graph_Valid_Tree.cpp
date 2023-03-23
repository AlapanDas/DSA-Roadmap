#include<bits/stdc++.h>
using namespace std;

class solution{
     public:
     bool isvalid(int n,vector<vector<int>> &edges)
     {
          int sizeofedges=edges.size();
          if(sizeofedges!=n-1)
               return false;
          vector<vector<int>> adj(n);
          for (int i = 0; i < adj.size(); i++)
               adj[i].resize(n);          
          
          for (int i = 0; i < sizeofedges; i++)
          {
               int u=edges[i][0], v=edges[i][1];
               adj[u][v]=adj[v][u]=1;
          }
          
          vector<int>  visited(n);
          visited[0]=1;
          int root=0,NoofVisitedNodes=0;
          queue<int> current;
          current.push(root);
          while (!current.empty())
          {
               root=current.front();
               for (int i = 0; i < n; i++)
               {
                    if(adj[root][i]!=1)
                         continue;
               }
               
               if(visited[i]!=1)
               {
                    visited[i]=1;
                    NoofVisitedNodes++;
                    current.push(i);
               }
          }
          if(NoofVisitedNodes==n)
               return true;
          return false;
     }
};