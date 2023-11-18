#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int *)malloc(5*sizeof(int));
    p[0]=0;
    p[1]=1;
    p[2]=2;


    int *q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
        printf("%d\t%u\n",p[i],&p[i]);
    }
    printf("=================================\n");

    free(p);
    p=q;
    q=NULL;
    for(int j=0;j<10;j++)
    {
        printf("%d\t%u\n",p[j],&p[j]);
    }
}