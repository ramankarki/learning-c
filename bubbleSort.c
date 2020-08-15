#include <stdio.h>

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    int arr[] = {6,5,9,4,345,654,654,7,5,3,2,3,5,6,8,8,87,6,5,4,3,76,45,6789,65,876,543,45,678,7654,3,456,78,76,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
    return 0;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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


