#include <stdio.h>

void selectionSort(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    int arr[] = {654,74,56,987,6543,345,68,9,87654,65,34567,654,543,876,54,4,78,9,876,43,3,46,786,433,8,3,};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    selectionSort(arr, size);
    printArray(arr, size);
    return 0;
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)  // loop for the size-1 times.
    {
        int minIndex = i;
        for (int j = i+1; j < size; j++)  // loop for i+1 to less than size times
        {
            if (arr[j] < arr[minIndex])  // if asumed smallest is not smaller, than swap with j index and update smallest value.
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

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
