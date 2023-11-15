#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
vector<int> getprimefac(int n){
    vector<int> ans;
    int nn = n;
    for (int i = 2; i * i <= n; i++){
        if (nn % i == 0){
            ans.pub(i);
            while (nn % i == 0){
                nn /= i;
            }
        }
    }
    if (nn > 1){
        ans.pub(nn);
    }
    return ans;
}
void solve(){
    vector<int> ans=getprimefac(28);
    for(auto val:ans)cout<<val<<" ";
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