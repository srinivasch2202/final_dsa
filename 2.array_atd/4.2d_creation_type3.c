#include<stdio.h>
#include<stdlib.h>
void main()
{
    //both array on heap using double pointer
    int **o;

    o=(int **)malloc(5*sizeof(int *));
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
            o[p][q]=p+q;
        }
    }

    //printing
    for(int k=0;k<5;k++)
    {
        for(int h=0;h<5;h++)
        {
            printf("%d\t",o[k][h]);
        }
        printf("\n");
    }



    
}