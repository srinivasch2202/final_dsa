#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10];//it will create stack memory
    a[0]=23;
    printf("%d\n",a[0]);

    int b[5]={1,2,3,4,5};
    int d[]={1,2};

    //accessing the single elments and traverse the array

    //stack array creation
    int c[5];

    
    //heap  array creation
    int n;
    printf("enter the array size");
    scanf("%d",&n);
    int *p;
    p=(int *)malloc(n*sizeof(int));

}