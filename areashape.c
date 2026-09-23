#include<stdio.h>

int areasquare(int side);
int areacircle(int rad);
int arearectanglr(int l,int b);

int main(){
    char shape;
    printf("Enter S for square, C for circle, R for rectangle ");
    scanf("%c",&shape);
    if(shape=='S'){
        printf("Okay, so you want the area of a square");
        int side;
        scanf("%d",&side);
        printf("Area=%d",areasquare(side));
    }
    else{
        printf("thank you");
    }
    return 0;
}

int areasquare(int side){
    int area;
    return area=side*side;
}