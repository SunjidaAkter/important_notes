#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fibo(int n){
    if(n==0 ||n==1)return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;cin>>n;
    cout<<fibo(3);
    return 0;
}
//*time complexity 2^n