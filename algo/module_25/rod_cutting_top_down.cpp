#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int dp[1005][1005];
int unbounded_knapsack(int n,int s,int v[],int w[]){
    if(n==0||s==0)return 0;
    if(dp[n][s]!=-1)return dp[n][s];
    if(w[n-1]<=s){
        return dp[n][s]=max(v[n-1]+unbounded_knapsack(n,s-w[n-1],v,w),unbounded_knapsack(n-1,s,v,w));
    }else return dp[n][s]=unbounded_knapsack(n-1,s,v,w);
}
int main(){
    int n;cin>>n;
    int v[n],w[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        w[i]=i+1;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=-1;
        }
    }
    cout<<unbounded_knapsack(n,n,v,w);
    return 0;
}