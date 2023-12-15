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
vector<int> sieve(int n){
    int *a = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++){
        if (a[i] == 0){
            vect.push_back(i);
            for (int j = i * i; j <= n; j += i){
                a[j] = 1;
            }
        }
    }
    return vect;
}
void solve(){
    vector<int>ans=sieve(15);
    for(int v:ans)cout<<v<<" ";
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