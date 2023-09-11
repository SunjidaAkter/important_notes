#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int dp[1005][1005];
int knapsack(int n,int s,int v[],int w[]){
    if(n==0||s==0)return 0;
    if(dp[n][s]!=-1)return dp[n][s];
    if(w[n-1]<=s){
        return dp[n][s]=max(v[n-1]+knapsack(n,s-w[n-1],v,w),knapsack(n-1,s,v,w));
    }else return dp[n][s]=knapsack(n-1,s,v,w);
} 
int main(){
    int n,s;cin>>n>>s;
    int v[n],w[n];
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>w[i];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(n,s,v,w);
    return 0;
}