#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the number of days");
    scanf("%d",&a);
    if(a>365){
        b=a/365;
        c=a%365;
        d=c/30;
        e=c%30;
        printf("%d years\n",b);
    }
    else{
        d=a/30;
        e=a%30;
    }
    printf("%d months\n",d);
    printf("%d days",e);
    return 0;
}

