#ifndef ARRAYHELPER_H_INCLUDED
#define ARRAYHELPER_H_INCLUDED

struct myArray
{
    int length;
    int array[];
};

void fillArray(struct myArray *);

void displayArray(struct myArray *);

#endif // ARRAYHELPER_H_INCLUDED