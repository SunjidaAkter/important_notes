#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<pair<int,int>> adj[N];

int main(){
    int m,n;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});//*for undirected graph
    }
    for(int i=1;i<=n;i++){
        cout<<"List "<<i<<": ";
        for(auto j:adj[i]){
            cout<<"("<<j.first<<", "<<j.second<<"), ";
        }
        cout<<endl;
    }
    return 0;
}