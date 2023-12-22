#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    cout<<n<<" ";
    while (n>1)
    {
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }else{
            n*=3;
            n+=1;
            cout<<n<<" ";
        }
    }
    return 0;
}