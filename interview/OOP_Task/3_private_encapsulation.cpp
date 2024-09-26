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

class A{
    private:
    ll val =5;
    public:
    void display(){
        cout<<val<<nl;
    }
    void set_val(ll v){
        val=v;
    }
};

void solve(){
  A a;
  a.display(); // Output: 5
//   a.val = 10; I cant access this variable as it is private 
  a.set_val(10);//but i can access it like this
  a.display(); // Output: 10

}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}