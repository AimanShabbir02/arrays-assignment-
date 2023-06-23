#include <stdio.h>

void countOccurrences(int arr[], int size) 
{
    printf("Number of occurrences of each number in the array:\n");
    
    int frequency[100] = {0};

    for (int i = 0; i < size; i++) 
	{
        frequency[arr[i]]++;
    }

    for (int i = 0; i < 100; i++) 
	{
        if (frequency[i] > 0) 
		{
            printf("%d occurs %d time(s)\n", i, frequency[i]);
        }
    }
}

int main() 
{
    int arr[] = {2, 7, 9, 3, 6, 7, 3, 2, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    countOccurrences(arr, size);

    return 0;
}
