#include<stdio.h>
int main(){
    int n,i,p=5;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=12;i++){
      
        printf("%d * %d = %d\n",n,i,p);
        p=p+5;
    }
    return 0;
}