#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)s+=a[i];
    int dp[n+1][s+1];
    dp[0][0]=1;
    for(int i=1;i<=s;i++)dp[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(a[i-1]<=j){
                dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    set<int>st;
    for(int j=0;j<=s;j++){
        if(dp[n][j]==1)st.insert(abs(j-(s-j)));
    }
    cout<<*st.begin();    
    return 0;
}