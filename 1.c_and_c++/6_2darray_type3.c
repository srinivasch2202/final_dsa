#include<stdio.h>
#include<stdlib.h>
void main()
{
    //all everything in heap
    int **p;//double pointer
    p=(int **)malloc(3*sizeof(int *));//create a pointer array in heap

    p[0]=(int *)malloc(4*sizeof(int));
    p[1]=(int *)malloc(4*sizeof(int));
    p[2]=(int *)malloc(4*sizeof(int));


    //assigning the values
    for(int i=0;i<3;i++)
    {
        for(int j;j<4;j++)
        {
            p[i][j]=i+j;
        }
    }

    //accessing the variables
    for(int l=0;l<3;l++)
    {
        for(int m=0;m<4;m++)
        {
            printf("%d\t",p[l][m]);

        }
        printf("\n");

    }

    printf("%d",p[1][2]);
}