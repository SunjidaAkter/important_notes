#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
vector<string>g;
int visited[N][N];
int m,n;
bool is_valid(int i,int j){
    return (i>=0&&j>=0&&i<m&&j<n);
}
void dfs(int i,int j){
    if(!is_valid)return;
    if(visited[i][j])return;
    if(g[i][j]=='#')return;
    visited[i][j]=true;
    dfs(i,j+1);
    dfs(i,j-1);
    dfs(i+1,j);
    dfs(i-1,j);
}
int main(){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        string x;cin>>x;
        g.push_back(x);
    }
    int cc=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j])continue;
            if(g[i][j]=='#')continue;
            dfs(i,j);
            cc++;
        }
    }
    cout<<cc;
    return 0;
}
/*
//*input
5 8
########
#..#...#
####.#.#
#..#...#
########
//*output
3
*/