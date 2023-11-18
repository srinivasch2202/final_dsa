#include<stdio.h>
#include<stdlib.h>
void main()
{
    int A[3][4]={{00,01,02,03},{10,11,12,13},{20,21,22,23},{30,31,32,32}};

    int *p[3];
    p[0]=(int *)malloc(4*sizeof(int));
    p[1]=(int *)malloc(4*sizeof(int));
    p[2]=(int *)malloc(4*sizeof(int));
    p[3]=(int *)malloc(4*sizeof(int));


    int **q;
    q=(int **)malloc(3*sizeof(int *));
    q[0]=(int *)malloc(4*sizeof(int));
    q[1]=(int *)malloc(4*sizeof(int));
    q[2]=(int *)malloc(4*sizeof(int));
    q[3]=(int *)malloc(4*sizeof(int));


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t%u\t",A[i][j],&A[i][j]);//in stack contionus but not in heap

            p[i][j]=A[i][j];
            q[i][j]=A[i][j];
        }
        printf("\n");
    }
    printf("=======================================\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t%u\t",p[i][j],&p[i][j]);

        }
        printf("\n");
    }
    printf("=======================================\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t%u\t",q[i][j],&q[i][j]);

        }
        printf("\n");
    }
 

}
