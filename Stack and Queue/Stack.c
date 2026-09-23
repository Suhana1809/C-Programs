#include <stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int isFull()
{
    if(top==MAX-1)
        return 1;
    return 0;
}

int isEmpty()
{
    if(top==-1)
        return 1;
    return 0;
}

void push(int value)
{
    if(isFull())
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top]=value;
        printf("Pushed: %d\n",value);
    }
}

int pop()
{
    if(isEmpty())
    {
        printf("No element to pop\n");
        return -1;
    }
    else
    {
        int popped_value=stack[top];
        top--;
        printf("Popped value = %d\n",popped_value);
        return popped_value;
    }
}

void display()
{
    int i;

    if(isEmpty())
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Stack Elements:\n");

        for(i=top; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }

        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    push(40);
    display();
    return 0;
}
