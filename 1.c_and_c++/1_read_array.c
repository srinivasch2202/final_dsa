#include<stdio.h>
void main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {   printf("enter the %d element",i);
        scanf("%d",&a[i]);

    }

    for(int i=0;i<5;i++)
    {
        printf("the element at index %d is %d\n",i,a[i]);
    }

    printf("----------------------------------------");

    for(int i=4;i>=0;i--)
    {
        printf("the elmenet at index %d is %d\n",i,a[i]);
    }
    
}