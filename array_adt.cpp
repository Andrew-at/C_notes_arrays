#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// array ADT implementation
// struct initilazing variables size and length with a pointer to A
struct Array 
{
    int A[20];
    int size;
    int length;
};

// displays array using Array struct as parameter
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ", arr.A[i]);
}

int main()
{

    struct Array arr={{2,3,4,5,6},10,5};

    Display(arr);

    return 0;
}
