#include <stdio.h>
#include <stdlib.h>
#include "arrayhelper.h"

int main(void)
{
    int arraySize = 0;
    struct myArray *ptrMyArray;

    printf("Please provide the desired array size: ");
    scanf("%d", &arraySize);

    ptrMyArray = malloc(sizeof(struct myArray) + arraySize * sizeof(int));
    ptrMyArray->length = arraySize;

    fillArray(ptrMyArray);
    displayArray(ptrMyArray);

    free(ptrMyArray);

    return 0;
}
