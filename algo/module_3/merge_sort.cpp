#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int nums[N];

void merge(int s,int e,int mid){

    int start_size=mid-s+1;
    int S[start_size+1];
    
    int end_size=e-(mid+1)+1;
    int E[end_size+1];

    for(int i=s,j=0;i<=mid;i++,j++){
        S[j]=nums[i];
    }
    for(int i=mid+1,j=0;i<=e;i++,j++){
        E[j]=nums[i];
    }

    S[start_size]=INT_MAX;
    E[end_size]=INT_MAX;

    int sp=0,ep=0;
    for(int i=s;i<=e;i++){
        if(S[sp]<=E[ep]){
            nums[i]=S[sp];
            sp++;
        }else{
            nums[i]=E[ep];
            ep++;
        }
    }
}
void mergeSort(int s,int e){
    if(s==e)return;
    int mid=(s+e)/2;
    mergeSort(s,mid);
    mergeSort(mid+1,e);
    merge(s,e,mid);
}

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    mergeSort(0,n-1);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}