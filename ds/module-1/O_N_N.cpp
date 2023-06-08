#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//loop er vitor arek loop thakle r duita loop kei jodi n times cholte hoi tahole setar time complexity O(N*N)
//loop er vitor arek loop thakle r first loop k jodi m times and second loop k jodi n times cholte hoi tahole setar time complexity O(M*N)