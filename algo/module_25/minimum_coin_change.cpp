#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int s;cin>>s;
    int dp[n+1][s+1];
    dp[0][0]=0;
    for(int i=1;i<=s;i++)dp[0][i]=INT_MAX;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(a[i-1]<=j){
                dp[i][j]=min(1+dp[i][j-a[i-1]],dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][s];
    return 0;
}
//*koita minimum element die 5 banano jai