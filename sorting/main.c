#include<stdlib.h>
#include"header.h"
#include<time.h>
int main()
{
    int *arr = (int*)malloc(size*sizeof(int));
    srand(time(NULL));
    setArray(arr);
    getArray(arr);
    bubbleSort(arr);
    getArray(arr);
    free(arr);
}