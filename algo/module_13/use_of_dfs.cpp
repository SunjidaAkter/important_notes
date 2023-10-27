#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;
vector<ll>adj[N];
vector<ll>dis(N);
bool visited[N];
ll dfs(ll u){
    cout<<u<<"o";
    visited[u]=true;
    bool flag=true;
    for(auto v: adj[u]){
        if(visited[v] == true) {
            continue;
        }
        flag=false;
        cout<<v<<"v"<<dis[u]<<"sv";
        dis[u]=dis[u]+dfs(v);
        cout<<dis[u]<<"see"<<u<<" "; 
    }
    if(flag){
        dis[u]+=1;
        return dis[u];
    }else{
        return dis[u];
    }
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int i=1;i<=n;i++){
            visited[i]=false;
            adj[i].clear();
            dis[i]=0;
        }
        for(int i=0;i<n-1;i++){
            ll u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        ll x=dfs(1);
        ll q;
        cin>>q;
        while(q--){
            ll a,b;
            cin>>a>>b;
            ll ans=dis[a]*dis[b];
            cout<<ans<<endl;
        }
    }
    return 0;
}