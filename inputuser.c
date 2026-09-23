#include<stdio.h>
int main(){
    int n;
    for(int i=0;;i++){
        scanf("%d",&n);
        if(n%2==0){
            printf("Thank You");
            break;
          
        }
        printf("%d\n",n);
    }
    return 0;

}