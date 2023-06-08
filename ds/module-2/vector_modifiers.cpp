#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>x={10,20,30,40};
    vector<int>y={10,20,30};
    vector<int>v={1,2,3};
    v=x;//O(n) oder size alada tai
    v=y;//O(1) oder size ak tai
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
    v.pop_back();
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

    return 0;
}