#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //first type
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v1.push_back(x);
    }
    for(int val:v1){
        cout<<val<<" ";
    }cout<<endl;
    //second type
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        int x;cin>>v2[i];
    }
    for(int val:v2){
        cout<<val<<" ";
    }

    return 0;
}