#include<bits/stdc++.h>
using namespace std;
void dfs(map<int,vector<int> > g,int n,int i,int vis[])
{
   if(vis[i]==0)
   { 
       vis[i]=1;
       cout<<i<<" ";
    for(auto j=g[i].begin();j!=g[i].end();j++)
    {
        
        dfs(g,n,*j,vis);
    }
   }
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<int,vector<int> > g;
    cout<<"enter number of edges and nodes"<<endl;
    int e,n;
    cin>>e;
    cin>>n;
    cout<<"enter the connection"<<endl;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
    }
    int vis[n];
    fill(vis,vis+n,0);
    dfs(g,n,0,vis);
}
