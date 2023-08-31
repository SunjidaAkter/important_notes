#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<int,int>pii;
const int N=1e5+5;
vector<pii>v[N];
bool vis[N];
class Edge{
    public:
    int a,b,w;
    Edge(int a,int b,int w){
        this->a=a;
        this->b=b;
        this->w=w;
    }

};
class cmp{
   public:
   bool operator()(Edge a,Edge b){
    return a.w<b.w;
   } 
};
void prims(int s){
    priority_queue<Edge,vector<Edge>,cmp>pq;
    vector<Edge>EdgeList;
    pq.push(Edge(s,s,0));
    while(!pq.empty()){
        Edge p=pq.top();
        pq.pop();
        int a=p.a;
        int b=p.b;
        int w=p.w;
        if(!vis[b])continue;
        vis[b]=true;
        EdgeList.push_back(p);
        for(pii ch:v[b]){
            
        }
    }
}
int main(){
    int n,e;cin>>n>>e;
    while(e--){
        int a,b,w;cin>>a>>b>>w;
        v[a].push_back({b,w});
        v[b].push_back({a,w});
    }
    prims(1);
    return 0;
}