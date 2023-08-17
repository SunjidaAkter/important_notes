#include<bits/stdc++.h>
using namespace std;
int n,m;
typedef pair<int,int>pii;
const int N=1e3+3;
const int INF=1e9+3;
vector<pii>g[N];
vector<pair<pii,int>>list_of_edges;
int d[N];
void bellman_ford(int s){
    for(int i=1;i<=n;i++){
        d[i]=INF;
    }
    d[s]=0;
    for(int i=1;i<n;i++){
        //edge relaxation
        // for(int u=1;u<=n;u++){
        //     for(pii vpair:g[u]){
        //         int v=vpair.first;
        //         int w=vpair.second;
        //         if(d[u]!=INF&&d[v]>d[u]+w){
        //             d[v]=d[u]+w;
        //         }
        //     }
        // }
        for(auto edge:list_of_edges){
            int u=edge.first.first;
            int v=edge.first.second;
            int w=edge.second;
            if(d[u]!=INF&&d[v]>d[u]+w){
                d[v]=d[u]+w;
            }

        }
    }
}
//*O(|E| |V|)
//*O(mn) for normal graph or
//*O(n²) for sparse graph 
//*O(n³) for dense graph 
int main(){
    cin>>n>>m;
    while(m--){
        int u,v,w;cin>>u>>v>>w;
        // g[u].push_back({v,w});
        list_of_edges.push_back({{u,v},w});
    }
    bellman_ford(1);
    for(int i=1;i<=n;i++){
        cout<<"Distance of "<<i<<" : "<<d[i]<<endl;
    }
    return 0;
}