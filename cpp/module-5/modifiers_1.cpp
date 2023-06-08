#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="hello";
    string b="world";
    a+=b;//a.append(b) same//normally kintu eta 2ta variable k jog kore concatenation kore na, but string er khetre eta concatanation korte partese , tar mane eta string er jonno modified hoise//oop te eta ke operator overloading bole
    a.push_back('A');
    a.pop_back();
    b[6]='x';//didn't work
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}