#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int knapsack(int n,int s,int v[],int w[]){
    if(n==0||s==0)return 0;
    if(w[n-1]<=s){
        return max(v[n-1]+knapsack(n,s-w[n-1],v,w),knapsack(n-1,s,v,w));
    }else return knapsack(n-1,s,v,w);
} 
int main(){
    int n,s;cin>>n>>s;
    int v[n],w[n];
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n;i++)cin>>w[i];
    cout<<knapsack(n,s,v,w);
    return 0;
}