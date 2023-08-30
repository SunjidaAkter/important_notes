#include<bits/stdc++.h>
using namespace std;
#define ll long long
int parent[1000];
int parentLevel[1000];
void dsu_set(int n){
    for(int i=1;i<=n;i++){
        parent[i]=-1;
        parentLevel[i]=1;
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
        if(parentLevel[leaderA]>parentLevel[leaderB]){
            //*A leader
            // parentLevel[leaderA]+=parentLevel[leaderB];
        }else if(parentLevel[leaderA]<parentLevel[leaderB]){
            parent[leaderA]=leaderB;
        }else{
            parent[leaderB]=leaderA;
            parentLevel[leaderA]++;
        }
    }
}
//*O(logN)
//*O(4)
int main(){
    int n,e;cin>>n>>e;
    dsu_set(n);
    while(e--){
        int a,b;cin>>a>>b;
        dsu_union(a,b);
    }
    cout<<dsu_find(2);
    return 0;
}
//*input
// 7 4
// 1 2
// 2 3
// 4 5
// 6 5