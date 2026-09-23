#include <stdio.h>

int binarySearch(int array[], int size, int key)
{
    int low = 0, high = size - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(array[mid] == key)
            return mid;
        else if(array[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int data[] = {10, 20, 30, 40, 50};
    int size = sizeof(data) / sizeof(int);
    int key = 30;
    int result;

    result = binarySearch(data, size, key);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);

    return 0;
}
