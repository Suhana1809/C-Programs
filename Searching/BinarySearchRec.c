#include <stdio.h>

int binarySearch(int array[], int low, int high, int key)
{
    if(low <= high)
    {
        int mid = (low + high) / 2;

        if(array[mid] == key)
            return mid;
        else if(array[mid] < key)
            return binarySearch(array, mid + 1, high, key);
        else
            return binarySearch(array, low, mid - 1, key);
    }

    return -1;
}

int main()
{
    int data[] = {10, 20, 30, 40, 50};
    int size = sizeof(data) / sizeof(int);
    int key = 30;
    int result;

    result = binarySearch(data, 0, size - 1, key);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);

    return 0;
}
