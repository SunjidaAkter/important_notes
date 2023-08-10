#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int>adj[N];
int level[N];
int visited[N];
set<int>q1;
void dfs(int u){
    visited[u]=true;
    q1.insert(u);
    for(int v:adj[u]){
        if(visited[v])continue;
        dfs(v);
        q1.insert(v);
    }
}
void bfs(int s){
    queue<int>q;
    q.push(s);
    q1.insert(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty()){
        //*pop a node from the queue and insert unvisited neighbors of that node
        int u=q.front();
        // q1.push(u);
        q.pop();
        //*section 1: a node is being processed
        for(int v:adj[u]){
            //*section 2: child processing
            if(visited[v])continue;
            q.push(v);
            q1.insert(v);
            visited[v]=true;
            level[v]=level[u]+1;
            //*section 3: child processing
        }
        //*section 4: same as 1
    }
}
int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cc=0;
    for(int i=1;i<=n;i++){
        if(visited[i])continue;
        bfs(i);
        // dfs(i);
        cc++;
        cout<<cc<<"th component: ";
        while(!q1.empty()){
            cout<<*q1.begin()<<" ";
            q1.erase(*q1.begin());
        } 
        cout<<endl;
    }
    cout<<"Number of connected components: "<<cc<<endl;
    return 0;
}