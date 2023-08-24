#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
int level[N];
int visit[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visit[s]=true;
    level[s]=0;
    while(!q.empty()){
        int parent=q.front();
        q.pop();
        for(int i=0;i<v[parent].size();i++){
            int child=v[parent][i];
            if(visit[child]==false){
                q.push(child);
                level[child]=level[parent]+1;
                visit[child]=true;
            }
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
    bfs(1);
    for(int i=1;i<=n;i++){
        cout<<"Node "<<i<<": "<<level[i]<<endl;
    }
    return 0;
}