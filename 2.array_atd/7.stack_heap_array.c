#include<stdio.h>
#include<stdlib.h>
void main()
{
    int A[5]={1,2,3};//stack

    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;

    for(int i=0;i<5;i++)
    {
        printf("%d\t%d\t%u\n",A[i],p[i],&p[i]);
    }

    free(p);

    //increasing the array

}