#include<stdio.h>
#include<stdlib.h>

struct array
{
    int *p;
    int size;
    int length;
};

void main()
{
    struct array arr={{1,2,3,4},10,4};
    printf("%d\n",arr.p);
    for(int i=0;i<4;i++)
    {
        printf("%d\t",&arr.p[i]);
    }

}