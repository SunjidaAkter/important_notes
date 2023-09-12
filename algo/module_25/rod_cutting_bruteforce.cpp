#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int unbounded_knapsack(int n,int s,int v[],int w[]){
    if(n==0||s==0)return 0;
    if(w[n-1]<=s){
        return max(v[n-1]+unbounded_knapsack(n,s-w[n-1],v,w),unbounded_knapsack(n-1,s,v,w));
    }else return unbounded_knapsack(n-1,s,v,w);
}
int main(){
    int n;cin>>n;
    int v[n],w[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
        w[i]=i+1;
    }
    cout<<unbounded_knapsack(n,n,v,w);
    return 0;
}