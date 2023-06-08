#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int x=100;
int main(){
    int x=200;//local scope er pradhanno besi
    printf("%d",x);
    printf(" In C programming, scope refers to the region of the program where a variable is accessible or visible.\n In other words, it determines where a variable can be accessed within a program.\n There are three types of scopes in C:\n Global scope:\n Variables declared outside of a function are called global variables and have global scope. \n They can be accessed from any part of the program.\n Local scope:\n Variables declared inside a function have local scope and can only be accessed within that function.\n Block scope:\n Variables declared inside a block of code, such as inside a loop or if statement, have block scope and can only be accessed within that block.\n The scope of a variable is important because it determines where the variable can be accessed and can help prevent naming conflicts between variables.");
    return 0;
}