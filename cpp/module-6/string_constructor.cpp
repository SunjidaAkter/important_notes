#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="hello world";//nicher moto koreo kora jai
    // string constructor
    // 1.
    string s("hello world");
    // 2.
    string s1("hello world",5);
    // 3.
    string s2(a,6);
    // 4.
    string s3(5,'y');
    cout<<s<<endl;//hello world
    cout<<s1<<endl;//hello
    cout<<s2<<endl;//world
    cout<<s3<<endl;
    return 0;
}