#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
const ll n=8;
string ChessBoard[n];
bool col[n],leftDiagonal[2*(n-1)],rightDiagonal[2*(n-1)];
ll numberOfWays=0;
void putNext(ll r){
    if(r==n){
        numberOfWays++;
        return;
    }
    for(ll c=0;c<n;c++){
        if(col[c]==false&&leftDiagonal[c+r]==false&&rightDiagonal[r-c+n-1]==false&&ChessBoard[r][c]=='.'){
            col[c]=leftDiagonal[c+r]=rightDiagonal[r-c+n-1]=true;
            putNext(r+1);
            col[c]=leftDiagonal[c+r]=rightDiagonal[r-c+n-1]=false;
        }
    }
}
void solve(){
    for(ll i=0;i<n;i++){
        cin>>ChessBoard[i];
    }
    putNext(0);
    cout<<numberOfWays<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}