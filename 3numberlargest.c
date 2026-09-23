#include<stdio.h>
int main(){
    int a,b,c;
    print("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b,c){
        printf("%d is the largest",a);
    }
    else if(b>c,a){
        printf("%d is the largest",b);
    }
    else{
        printf("%d is the largest",c);
    }
    if(a<b,c){
        printf("%d is the smallest",a);
    }
    else if(b<a,c){
        printf("%d is the smallest",b);
    }
    else{
        printf("%d is the smallest",c);
    }
    return 0;
}