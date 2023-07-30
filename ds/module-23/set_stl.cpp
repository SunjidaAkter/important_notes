#include<bits/stdc++.h>
using namespace std;
int main(){
    // int t;
    // cin>>t;
    // set<int>s;
    // while(t--){
    //     int a,b;
    //     cin>>a>>b;
    //     if(a==1){
    //         s.insert(b);
    //     }else if(a==2){
    //         s.erase(b);
    //     }else if(a==3){
    //         if(s.count(b))cout<<"Yes"<<endl;
    //         else cout<<"No"<<endl;
            
    //     }
    // }
    vector<int>v={11,4,6};
    sort(v.begin(),v.end());
    cout<<v.back();
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}