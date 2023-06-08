#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string nm,int ag,int mk1,int mk2){
            name=nm;
            age=ag;
            mark1=mk1;
            mark2=mk2;
        }
        void fun(){
            cout<<name<<" "<<age<<endl;
        }
        int total_mark(){
            return mark1+mark2;
        }
};
int main(){
    Person rakib("Rakib Ahsan",22,80,90);
    rakib.fun();
    cout<<rakib.total_mark();
    return 0;
}