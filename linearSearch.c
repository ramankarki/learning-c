#include <stdio.h>

int main()
{
	int data = 10;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int size = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == data)
		{
			printf("Found data.\nIt is in %ith index of array.\n", i+1);
			return 0;
		}
	}
	return 0;
}
