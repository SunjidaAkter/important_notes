#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i)cout<<n/i<<endl;
        }
    }
    return 0;
}
// ekhane loop ta root over of n times chalaise tai etar time complexity O(sqrt(N))