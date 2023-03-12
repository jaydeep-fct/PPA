#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int Arr[5]; // Static memory allocation

    int *p = NULL;
    p = (int *)malloc(5 * sizeof(int)); //dynamic memory allocation using malloc

    int *q = NULL;
    q = (int *)calloc(5, sizeof(int)); //dynamic memory allocation using calloc
    return 0;
}