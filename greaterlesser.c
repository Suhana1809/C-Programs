#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater\n",a);
        printf("%d is lesser\n",b);
    }
    else{
        printf("%d is greater\n",b);
        printf("%d is lesser\n",a);
    }
    return 0;    
}