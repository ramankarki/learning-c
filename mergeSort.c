#include <stdio.h>

void mergeSort(int arr[], int l, int r);
void printArray(int arr[], int size);
void merge(int arr[], int l, int mid, int r);

int main()
{
    int arr[] = {654,74,56,987,6543,345,68,9,87654,65,34567,654,543,876,54,4,78,9,876,43,3,46,786,433,8,3,};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    mergeSort(arr, 0, size-1);
    printArray(arr, size);
    return 0;
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

void merge(int arr[], int l, int mid, int r)
{ 
    int i, j, k; 
    int n1 = mid - l + 1; 
    int n2 = r - mid; 
  
    int left[n1], right[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        left[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        right[j] = arr[mid + 1 + j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (left[i] <= right[j]) { 
            arr[k] = left[i]; 
            i++; 
        } 
        else { 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = right[j]; 
        j++; 
        k++; 
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
