#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
int level[N];
int visit[N];
void dfs(int s){
    visit[s]=true;
    cout<<s<<endl;
    for(int i=0;i<v[s].size();i++){
        int child=v[s][i];
        if(visit[child]==false){
            dfs(child);
        }
    }
}
int main(){
    int n,e;cin>>n>>e;
    while(e--){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    return 0;
}