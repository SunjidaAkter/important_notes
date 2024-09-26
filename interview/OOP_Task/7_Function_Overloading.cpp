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

class Calculator {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }

    int sum(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};

void solve(){
     Calculator cal;

     cout << cal.sum(1, 2) << endl;  // Output: 3

    
    cout << cal.sum(1, 2, 3) << endl;  // Output: 6    
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