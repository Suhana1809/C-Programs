#include <stdio.h>

int linearSearch(int array[], int size, int key)
{
    int i;

    for(i = 0; i < size; i++)
    {
        if(array[i] == key)
            return i;
    }

    return -1;
}

int main()
{
    int data[] = {10, 20, 30, 40, 50};
    int size = sizeof(data) / sizeof(int);
    int key = 30;
    int result;

    result = linearSearch(data, size, key);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);

    return 0;
}
