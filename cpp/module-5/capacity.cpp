#include<bits/stdc++.h>
using namespace std;
int main(){
    string a="Hello world!";
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;//string er capacity mane max size barano jai
    a="Hello world! hi!!";
    cout<<a.size()<<endl;
    cout<<a.max_size()<<endl;//string er max size for my local machine is 10^9 but for online compiler its 10^6
    cout<<a.capacity()<<endl;//string er capacity mane max size barano jai
//     Initial capacity: 0
// Capacity after adding 1 element(s): 1
// Capacity after adding 2 element(s): 2
// Capacity after adding 3 element(s): 4
// Capacity after adding 4 element(s): 4
// Capacity after adding 5 element(s): 8
// Capacity after adding 6 element(s): 8
// Capacity after adding 7 element(s): 8
// Capacity after adding 8 element(s): 8
// Capacity after adding 9 element(s): 16
// Capacity after adding 10 element(s): 16
    string s="hello";
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;
    if(s.empty()==true)cout<<"empty"<<endl;
    else cout<<"Not empty";
    string s3;
    cin>>s3;
    cout<<s3.size()<<endl;
    s3.resize(5);
    s3.resize(6,'_');
    s3.resize(11,'x');
    cout<<s3<<endl;
    return 0;
}