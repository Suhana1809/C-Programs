#include<stdio.h>
void bonjour();
void namaste();
int main(){
    char nationality;
    printf("Enter 'I' if Indian or 'F' if French\n");
    scanf ("%c",&nationality);
    if(nationality=='I'){
        namaste();
    }
    else if(nationality=='F'){
        bonjour();
    }
    else{
        printf("wrong input");
    }
    return 0;
}

void bonjour(){
    printf("Bonjour");
}
void namaste(){
    printf("Namaste");
}