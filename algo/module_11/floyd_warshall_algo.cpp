#include<bits/stdc++.h>
using namespace std;
const int N=1e3+3;
const int INF=1e9+3;
int d[N][N];
int m,n;
void dist_initialize(){
    cout <<n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j)d[i][j]=INF;
        }
    }
}
void print_matrix(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (d[i][j]==INF)cout<<"x";
            else cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m,n;
    cin>>n>>m;
    cout<<n;
    dist_initialize();
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        d[u][v]=w;
    }
    print_matrix();
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    cout<<"After Floyd Warshall Algo"<<endl;
    print_matrix();
    return 0;
}