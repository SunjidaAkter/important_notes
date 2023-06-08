#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string name,int age,int mk1,int mk2){
            this->name=name;//this holo current object er pointer
            this->age =age;
            mark1=mk1;
            mark2=mk2;
        }
        void fun(){
            cout<<name<<" "<<this->age<<endl;
        }
        // int total_mark(){
        //     return mark1+mark2;
        // }
};
int main(){
    Person rakib("Rakib Ahsan",22,80,90);
    rakib.fun();
    // cout<<rakib.total_mark();
    return 0;
}