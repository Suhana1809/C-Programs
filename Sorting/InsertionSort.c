#include <stdio.h>
void insertion_sort(int array[], int size);
int main()
{
    int data[] = {6,4,7,8,1,9,5};
    int size = sizeof(data)/sizeof(int);

    insertion_sort(data,size);

    printf("Sorted array:\n");

    for(int i=0; i<size; i++)
    {
        printf("%d",data[i]);
    }
}

void insertion_sort(int array[], int size)
{
    for(int step=1; step<size; step++)
    {
        int key=array[step];
        int j=step-1;

        while(j>=0 && key<array[j])
        {
            array[j+1]=array[j];
            --j;
        }

        array[j+1]=key;
    }
}
