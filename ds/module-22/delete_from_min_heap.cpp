#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x){
    v.push_back(x);
    int curr_index=v.size()-1;
    while(curr_index!=0){
        int parent_index=(curr_index-1)/2;
        if(v[parent_index]>v[curr_index])swap(v[parent_index],v[curr_index]);
        else break;
        curr_index=parent_index;
    }
}
void delete_heap(vector<int> &v){
    v[0]=v[v.size()-1];
    v.pop_back();
    int curr=0;
    while(true){
        int left_index=curr*2+1;
        int right_index=curr*2+2;
        int last_index=v.size()-1;
        if(left_index<=last_index && right_index<=last_index){
            if(v[left_index]<=v[right_index] && v[left_index]<v[curr]){
                swap(v[left_index],v[curr]);
                curr=left_index;
            }else if(v[right_index]<=v[left_index] && v[right_index]<v[curr]){
                swap(v[right_index],v[curr]);
                curr=right_index;
            }else {
                break;
            }
        }else if(left_index<=last_index){
            if(v[left_index]<v[curr]){
                swap(v[left_index],v[curr]);
                curr=left_index;
            }else{
                break;
            }
        }else if(right_index<=last_index){
            if(v[right_index]<v[curr]){
                swap(v[right_index],v[curr]);
                curr=right_index;
            }else{
                break;
            }
        }else{
            break;
        }
    }
}
void print_heap(vector<int>v){
    for(int val:v)cout<<val<<" ";
}
int main(){
    vector<int>v;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        insert_heap(v,x);
    }
    // delete_heap(v);
    print_heap(v);cout<<endl;
    delete_heap(v);
    print_heap(v);

    return 0;
}