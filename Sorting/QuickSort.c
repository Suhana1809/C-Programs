#include <stdio.h>

void quick_sort(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
    int data[] = {4,5,7,9,1,3,8,2,6};
    int n = sizeof(data)/sizeof(int);

    quick_sort(data,0,n-1);

    printf("Sorted array:\n");

    for(int i=0; i<n; i++)
    {
        printf("%d",data[i]);
    }
}

void quick_sort(int array[], int low, int high)
{
    if(low<high)
    {
        int pi=partition(array,low,high);

        quick_sort(array,low,pi-1);
        quick_sort(array,pi+1,high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot=array[high];
    int i=(low-1);

    for(int j=low; j<high; j++)
    {
        if(array[j]<=pivot)
        {
            i++;

            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }

    int temp=array[i+1];
    array[i+1]=array[high];
    array[high]=temp;

    return(i+1);
}
