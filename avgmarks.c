#include<stdio.h>
int main(){
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float avg;
    printf("Enter the marks of five subjects");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    avg=(sub1+sub2+sub3+sub4+sub5)/5;
    printf("The average marks of five subjects is%f",avg);
    return 0;
}