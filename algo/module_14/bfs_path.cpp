#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int dis[N];
int par[N];
bool vis[N];
vector<int>v[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    dis[s]=0;
    vis[s]=true;
    par[s]=-1;
    while(!q.empty()){
        int parent=q.front();
        q.pop();
        for(int child:v[parent]){
            if(!vis[child]){
                q.push(child);
                dis[child]=dis[parent]+1;
                vis[child]=true;
                par[child]=parent;
            }
        }
    }
}
int main(){
    int n,e;cin>>n>>e;
    while(e--){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    // for(int i=1;i<=n;i++){
    //     cout<<"Node "<<i<<": "<<par[i]<<endl;
    // }
    int d;cin>>d;
    if(vis[d]){
        vector<int>path;
        int x=d;
        while(x!=-1){
            path.push_back(x);
            x=par[x];
        }
        reverse(path.begin(),path.end());
        for(int i=1;i<path.size();i++)cout<<path[i-1]<<" -> "<<path[i]<<endl;
    }else cout<<"No Path"<<endl;
    return 0;
}