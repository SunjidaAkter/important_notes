#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    while(n--){
        ll x,y;cin>>x>>y;
        if(x>=y){
            if(x%2==0)cout<<((x*x)-(y-1))<<endl;
            else if(x%2==1)cout<<(((x-1)*(x-1))+y)<<endl;
        }else{
            if(y%2==0)cout<<(((y-1)*(y-1))+x)<<endl;
            else if(y%2==1)cout<<((y*y)-(x-1))<<endl;
        }
    }
    return 0;
}