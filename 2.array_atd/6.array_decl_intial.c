#include<stdio.h>
void main()
{
    int x=10;

    int a[5];
    a[0]=2;



    int A[5];// garbage values
    int B[5]={1,2,3,4,5};
    int C[5]={1,2};
    int D[5]={0};

    int E[]={2,1,12,12,1,1,};


    printf("%d\n",B[2]);
    printf("%d\n",2[B]);
    printf("%d\n",*(B+2));//pointer arthimetic



    for(int i=0;i<6;i++)
    {
        printf("%d\t",E[i]);
    }

    //memory address
    for(int j=0;j<5;j++)
    {
        printf("%u\t",&B[j]);
    }
}