#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b,c){
        printf("%d is the largest\n",a);
    }
    else if(b>c,a){
        printf("%d is the largest\n",b);
    }
    else{
        printf("%d is the largest\n",c);
    }
    if(a<b,c){
        printf("%d is the smallest\n",a);
    }
    else if(b<a,c){
        printf("%d is the smallest\n",b);
    }
    else{
        printf("%d is the smallest\n",c);
    }
    return 0;
} 