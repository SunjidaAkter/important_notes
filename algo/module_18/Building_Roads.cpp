#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
int parent[N];
int parentSize[N];
void dsu_set(int n){
    for(int i=1;i<=n;i++){
        parent[i]=-1;
        parentSize[i]=1;
    }
}
int dsu_find(int n){
    while(parent[n]!=-1){
        n=parent[n];
    }
    return n;
}
void dsu_union(int a,int b){
    int leaderA=dsu_find(a);
    int leaderB=dsu_find(b);
    if(leaderA!=leaderB){
        if(parentSize[leaderA]>parentSize[leaderB]){
            parent[leaderB]=leaderA;
            parentSize[leaderA]+=parentSize[leaderB];
        }else{
            parent[leaderA]=leaderB;
            parentSize[leaderB]+=parentSize[leaderA];
        }
    }
}
int main(){
    int n,e;cin>>n>>e;
    dsu_set(n);
    while(e--){
        int a,b;cin>>a>>b;
        dsu_union(a,b);
    }    
    map<int,bool>mp;
    vector<int>v;
    for(int i=1;i<=n;i++){
        mp[dsu_find(i)]=true;
    }
    for(auto p:mp){
        v.push_back(p.first);
    }
    cout<<v.size()-1<<endl;
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<" "<<v[i+1]<<endl;
    }
    return 0;
}