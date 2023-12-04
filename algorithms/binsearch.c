#include <stdio.h>

/*
A binary search function that returns the
located value or -1 if no value could be found.
*/
int binarySearch(int *, int, int);

int main(void)
{
    int arr[] = {1, 3, 5, 6, 8, 12, 15, 19, 22, 28, 31, 35, 38, 41};
    // int *arr2 = arr; // ignore for now

    int length = (sizeof(arr) / sizeof(int));
    int target = 32;

    int retVal = binarySearch(arr, length, target);
    printf("Value returned: %d\n", retVal);

    return 0;
}

int binarySearch(int *arr, int length, int target)
{
    int l = 0;
    int r = length - 1;
    int m = 0;

    while (l <= r)
    {
        m = l + (r - l) / 2;

        if (arr[m] == target)
            return arr[m];
        else if (arr[m] < target)
            l = m + 1;
        else if (arr[m] > target)
            r = m - 1;
    }
    return -1;
}