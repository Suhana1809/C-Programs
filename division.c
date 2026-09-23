#include<stdio.h>
int main(){
    int dividend;
    int divisor;
    int quotient;
    int remainder;
    printf("enter dividend and divisor");
    scanf("%d%d",&dividend,&divisor);
    quotient=dividend/divisor;
    printf("the quotient is %d\n",quotient);
    remainder=dividend%divisor;
    printf("the remainder is %d",remainder);

    return 0;

}