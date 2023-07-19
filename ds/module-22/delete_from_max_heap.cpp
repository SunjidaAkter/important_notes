#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x){
    v.push_back(x);
    int curr_index=v.size()-1;
    while(curr_index!=0){
        int parent_index=(curr_index-1)/2;
        if(v[parent_index]<v[curr_index])swap(v[parent_index],v[curr_index]);
        else break;
        curr_index=parent_index;
    }
}
void delete_heap(vector<int> &v){
    v[0]=v[v.size()-1];
    v.pop_back();
    
}
int main(){
    vector<int>v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insert_heap(v,x);
    }
    for(int val:v)cout<<val<<" ";

    return 0;
}