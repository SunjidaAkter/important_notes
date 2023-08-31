#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Edge{
    public:
    int a,b,w;
    Edge(int a,int b,int w){
        this->a=a;
        this->b=b;
        this->w=w;
    }

};
bool cmp(Edge a,Edge b){
    return a.w>b.w;
} 
int main(){
    int n,e;cin>>n>>e;
    vector<Edge>v;
    while(e--){
        int a,b,w;cin>>a>>b>>w;
        v.push_back(Edge(a,b,w));
    } 
    sort(v.begin(),v.end(),cmp);
    return 0;
}