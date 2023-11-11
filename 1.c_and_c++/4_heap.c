#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[4];// it will allocated in stack
    a[1]=9;

    int *p;// pointer variable is required to access the heap
    p=(int *)malloc(5*sizeof(int)); // it was created in heap

    p[0]=3;
    p[1]=2;
    p[2]=4;
    p[3]=9;
    p[4]=23;
    printf("%d\n%d\n",a[1],p[0]);

    for(int i=0;i<5;i++)
    {
        printf("%d\n",p[i]);
    }


    // in c++ p=new int[5]
    // delete []p;

    free(p);
    printf("%d",p[0]);
}