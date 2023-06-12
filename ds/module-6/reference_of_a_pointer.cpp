#include<bits/stdc++.h>
using namespace std;
void fun(int* &p){//pointer er address k pass korlam mane pointer by reference pass korlam
    // p=NULL;
    cout<<&p<<endl;
}
int main(){
    int val=10;
    int* ptr=&val;
    fun(ptr);
    cout<<&ptr<<endl;
    cout<<ptr<<endl;
    cout<<&val<<endl;
    // cout<<*ptr<<endl;//or address null hoe gachhe tai error asbe
    return 0;
}