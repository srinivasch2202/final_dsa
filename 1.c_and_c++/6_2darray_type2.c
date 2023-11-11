#include<stdio.h>
#include<stdlib.h>
void main()
{
    //partial on stack and partial on heap
    int *p[3];//create a pointer array on stack

    //we are creating a array on heap
    p[0]=(int *)malloc(4*sizeof(int));
    p[1]=(int *)malloc(4*sizeof(int));
    p[2]=(int *)malloc(4*sizeof(int));

    //assigning the values
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            p[i][j]=i+j;
        }

    }

    //accessing
    for(int l=0;l<3;l++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",p[l][j]);
        }
        printf("\n");
    }
}

