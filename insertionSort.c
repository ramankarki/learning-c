#include <stdio.h>

void insertionSort(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0,76,5,34,56,776,54,3,45,67,6543,7654,34567,76,54,3456,7,65,43,654,456};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    insertionSort(arr, size);
    printArray(arr, size);
    return 0;
}

void insertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)  // loop from 1 to last index of array.
    {
        int j = i;
        while (arr[j-1] > arr[j] && j > 0)  // if j-1 is greater than j, swap them.
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

void printArray(int arr[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i, ", arr[i]);
    }
    printf("\n");
}
