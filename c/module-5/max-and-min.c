/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.

Examples
inputCopy
1 2 3
outputCopy
1 3
inputCopy
-1 -2 -3
outputCopy
-3 -1
inputCopy
10 20 -5
outputCopy
-5 20

*/
#include<stdio.h>
int main(){
    int a,b,c,max,min;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    min=c;
    if(a<=b || a<=c){
        if(b<=c){
            max=c;
        }else{
            max=b;
        }
    }
    if(c>=b || c>=a){
        if(a<=b){
            min=a;
        }else{
            min=b;
        }
    }
    printf("%d %d",min,max);
    return 0;
}