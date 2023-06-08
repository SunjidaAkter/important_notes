#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name,int age){
            this->name=name;//this holo current object er pointer
            this->age =age;
        }
        // void fun(){
        //     cout<<name<<" "<<this->age<<endl;
        // }
        // int total_mark(){
        //     return mark1+mark2;
        // }
};
int main(){
    Person* rakib=new Person("Rakib Ahsan",22);
    Person* sakib=new Person("Sakib Ahmed",22);
    *rakib=*sakib;
    delete sakib;
    cout<<rakib->name;
    return 0;
}