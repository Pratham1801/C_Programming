#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;

    //Step 1 : Allocate the Memory
    Arr = (int *)malloc(5* sizeof(int));        //20

    //Step 2 : Use the Memory

    Arr = (int *) realloc(Arr,3*sizeof(int));  //12

    //Step 3: Free the Memory
    free(Arr);

    return 0;
}