#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    cin.ignore();
    string s;
    getline(cin,s);
    cout<<i<<endl;
    cout<<s<<endl;
    cout<<s.size()<<endl;
    //jhamela hobe jokhon tumi age integer nibe and then next line e string nite chao.. ekhane getline porer enter count kore na but ager enter count kore ... tai string er age int nile ei problem hoi... cin.ignore() othoba getchar() use kore ei problem solve kora jai
    return 0;
}