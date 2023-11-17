#include<stdio.h>
#include<stdlib.h>
void main()
{
    //1.complete array creation in stack
    int a[5][5];
    
    //assigning 
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            a[i][j]=i+j;
        }
    }

    //printing
    for(int l=0;l<5;l++)
    {
        for(int m=0;m<5;m++)
        {
            printf("%d\t",a[l][m]);
        }
        printf("\n");
    }

    printf("=============================================================\n");



    //2.one array on  stack and other array on heap
    int *o[5];
    o[0]=(int *)malloc(5*sizeof(int)); 
    o[1]=(int *)malloc(5*sizeof(int)); 
    o[2]=(int *)malloc(5*sizeof(int)); 
    o[3]=(int *)malloc(5*sizeof(int)); 
    o[4]=(int *)malloc(5*sizeof(int)); 

    //assigning 
    for(int p=0;p<5;p++)
    {
        for(int q=0;q<5;q++)
        {
            a[p][q]=p+q;
        }
    }

    //printing
    for(int k=0;k<5;k++)
    {
        for(int h=0;h<5;h++)
        {
            printf("%d\t",a[k][h]);
        }
        printf("\n");
    }


    
}