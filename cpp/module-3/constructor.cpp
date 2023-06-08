#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        char section;
        int cls;
        char name[101];

        Student(int r,char s,int c,char*n){//ekhane char* eta die simply character array o bole
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
Student fun(){
    char name[101]="sun";
    Student rahim(12,'A',6,name);
    return rahim;
}//rvo->return value optimization
int main(){
    Student rahim=fun();
    cout<<rahim.roll<<endl;
    return 0;
}