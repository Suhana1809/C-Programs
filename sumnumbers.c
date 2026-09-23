#include <stdio.h>

int main() {
   int n,i=1,s=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=n){
        s+=i;
        i++;
    }
    printf("The sum is %d\n",s);
    for(i=n;i>=0;i--){
        printf("%d\n",i);
    }

    return 0;
}