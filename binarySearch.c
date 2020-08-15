#include <stdio.h>

int binarySearch(int arr[], int l, int u, int data);

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int value;
    printf("value: ");
    scanf("%i", &value);
    int i = binarySearch(arr, 0, size-1, value);
    printf("%i is the index of data.\n", i);
    return 0;
}

int binarySearch(int arr[], int l, int u, int data)
{
    if (l <= u)
    {
        int mid = (l + u)/2;
        if (arr[mid] == data)  // if found, return index.
        {
            return mid;
        }
        if (data > arr[mid])  // if data is greater, than search for right half.
        {
            binarySearch(arr, mid+1, u, data);
        }
        else  // else go for left half.
        {
            binarySearch(arr, l, mid-1, data);
        }
    }
    else
    {
        return -1;
    }   
}
