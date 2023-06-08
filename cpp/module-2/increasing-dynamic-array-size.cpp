#include<bits/stdc++.h>
using namespace std;
int main(){
    int* a=new int[5];
    int* b=new int[7];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        b[i]=a[i];
    }
    b[5]=6,b[6]=7;
    for(int i=0;i<7;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    delete[] a;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}