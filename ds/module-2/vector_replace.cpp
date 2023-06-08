#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,2,3,4,2,5,6,7,8,9,9};
    replace(v.begin(),v.end(),2,10);
    replace(v.begin(),v.end()-1,9,10);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    return 0;
}