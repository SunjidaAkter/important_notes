#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int> adj[N];
bool visited[N];
int depth[N];
int height[N];
void dfs(int u){
    //* section 1
    //* actions just after entering a node
    visited[u]=true;
    cout<<"visiting node: "<<u<<endl;
    for(int v:adj[u]){
        //* section 2
        //* actions before entering a new child/neighbour
        if(visited[v])continue;
        depth[v]=depth[u]+1;
        dfs(v);
        //* section 3
        //* actions after exiting a child/neighbour
    }
    //* section 4
    //* actions before exiting node u
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//*for undirected graph
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<"depth of node "<<i<<" is: "<<depth[i]<<endl;
    }
    return 0;
}