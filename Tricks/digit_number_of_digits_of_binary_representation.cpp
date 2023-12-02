#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int digits_number(int n){
    int sz=0;
    while(n>0){
        sz++;
        n/=2;
    }
    return sz;
}
int main(){
    int n=4;
    cout<<digits_number(n);
    return 0;
}