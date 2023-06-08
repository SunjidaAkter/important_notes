#include<bits/stdc++.h>
using namespace std;
int main(){
    int* x=new int;//dynamic syntax
    *x=10;
    cout<<*x<<endl;
    float* y=new float;//dynamic syntax
    *y=10.56;
    cout<<*y;
    return 0;
}