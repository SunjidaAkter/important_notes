#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];
int level[N];
int visited[N];
int parent[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    parent[s]=-1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:g[u]){
            if(visited[v])continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
            parent[v]=u;
        }
    }
}
int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
    cout<<level[n]<<endl;
    vector<int>path;
    int curr=n;
    while(curr!=-1){
        path.push_back(curr);
        curr=parent[curr];
    }
    reverse(path.begin(),path.end());
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    return 0;
}