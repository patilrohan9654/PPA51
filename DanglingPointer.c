#include<stdio.h>

int main()
{
    int *p = NULL;

    p = (int *)malloc(5*sizeof(int));

    free(p);

    return 0;
}