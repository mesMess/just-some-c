#include <stdio.h>
#include "arrayhelper.h"

struct myArray;
// {
//     int length;
//     int array[];
// };

void fillArray(struct myArray *strcArr)
{
    for (int i = 0; i < strcArr->length; i++)
        strcArr->array[i] = (i + 1) * 3;
}

void displayArray(struct myArray *strcArr)
{
    for (int i = 0; i < strcArr->length; i++)
        printf("%d ", strcArr->array[i]);
}