#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a<0){a=-a;}
    else{a=a;}
    printf("absolute value=%d",a);
    return 0;
}