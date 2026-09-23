#include<stdio.h>
int main(){
    float a;
    printf("Enter your marks");
    scanf("%f",a);
    if(a>0 && a<30){
        printf("C\n");
    }
    else if(a>=30 && a<70){
        printf("B\n");
    }
    else if(a>=70 && a<90){
        printf("a\n");
    }
    else if(a>=90 && a<100){
        printf("A+\n");
    }
    else{
        printf("wrong marks");
    }
    return 0;
}