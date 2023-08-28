#include<bits/stdc++.h>
using namespace std;
const int N=1e7;
int main(){
    int n,e;cin>>n>>e;
    int dis[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dis[i][j]=N;
            if(i==j)dis[i][j]=0;
        }
    }
    while(e--){
        int a,b,w;cin>>a>>b>>w;
        dis[a][b]=w;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(dis[i][j]==N)cout<<"∝"<<" ";
            else cout <<dis[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dis[i][k]+dis[k][j]<dis[i][j]){
                    dis[i][j]=dis[i][k]+dis[k][j];
                }
            }
        }
    }
    cout<<"updated"<<endl;
    bool flag=false;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==j)&& dis[i][j]<0){
                cout<<"Cycle detected!"<<endl;
                flag=true;
                break;
            }else{
                if(dis[i][j]==N)cout<<"INF"<<" ";
                else cout <<dis[i][j]<<" ";
            }
        }
        if(flag)break;
        else cout<<endl;
    }
    return 0;
}
//*input
// 3 3
// 1 2 -1
// 2 3 2
// 3 1 -5
//* output
// 0 -1 ∝ 
// ∝ 0 2 
// -5 ∝ 0 
// updated
// Cycle detected!

