#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        mp[a]++;
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
        if(i.second>1){
            cout<<"duplicate present"<<endl;

        }
    }
    cout<<mp.size()<<endl;
    return 0;
}