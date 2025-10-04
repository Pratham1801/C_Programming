#include<stdio.h>
#include<stdlib.h>

int main()
{
    int lenght = 0;
    int *Arr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&lenght);

    //Step 1 : Allocate the Memory
    Arr = (int *)calloc(lenght , sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory \n");
    }
    else 
    {
        printf("Memory gets succesfully allocated \n");
    }

    //Step 2 : Use the Memory

    //Step 3: Free the Memory
    free(Arr);

    return 0;
}