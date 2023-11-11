#include<stdio.h>
void main()
{
    // array is created in stack 
    int a[3][4];
    int b[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    //accessing
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n\n");
    } 
}