#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    double x;
    scanf("%lf",&x);
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=pow(a*1.0,b*1.0);//a**b eta int die na korai better kintu trpr o jodi drkr hoi tahole evabe korte hobe .. majhe modhe ans ta ke o double e convert kora lagte pare
    double c,d;
    scanf("%lf %lf",&c,&d);
    double answer=pow(c,d);//a**b eta double input nie evabe korlei better
    int ans1=ceil(x);//3.0001 er jonno ans asbe 4
    int ans2=floor(x);//3.001 er jonno ans asbe 3
    int ans3=round(x);//3.4 er jonno ans asbe 3 and //3.5 er jonno ans asbe 4
    double ans4=sqrt(x);//eta die square root ber kore r ki
    int y;
    scanf("%d",&y);
    int ans5=abs(y);// absolute ans dibe r etar library kintu math.h na etar library stdlib.h
    printf("%0.2lf %d %d %d %d %0.2lf %d",answer,ans,ans1,ans2,ans3,ans4,ans5);
    return 0;
}