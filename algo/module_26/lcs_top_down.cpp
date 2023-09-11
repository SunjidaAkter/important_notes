#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int dp[1005][1005];
int lcs(string a,int n,string b,int m){
    if(n==0||m==0)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    if(a[n-1]==b[m-1]){
        int ans=lcs(a,n-1,b,m-1);
        return dp[n][m]=ans+1;    
    }else{
        int choice1=lcs(a,n-1,b,m);
        int choice2=lcs(a,n,b,m-1);
        return dp[n][m]=max(choice1,choice2);
    }    
}
int main(){
    string a,b;
    cin>>a>>b;
    memset(dp,-1,sizeof(dp));
    cout<<lcs(a,a.size(),b,b.size());
    return 0;
}