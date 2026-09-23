#include<stdio.h>
void hello(){
    printf("hello\n");
}
void goodbye();

int main(){
    hello();
    goodbye();
    return 0;
}

void goodbye(){
    printf("goodbye");
}