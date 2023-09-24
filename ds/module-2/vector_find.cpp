#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,2,4,3,4,5,3,9};
    // *vector<int>::iterator it;
    auto it=find(v.begin(),v.end(),9);
    if(it==v.end())cout<<"Not found";
    cout<<"Found";
    return 0;
}